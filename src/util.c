/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 14:36:52 by tbeguin           #+#    #+#             */
/*   Updated: 2019/01/12 15:39:10 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

void		ft_free_list(t_list *alst)
{
	t_tetri *cur;
	t_list	*next;

	while (alst)
	{
		next = alst->next;
		cur = (t_tetri *)alst->content;
		ft_free_tetri(cur);
		ft_memdel((void **)alst);
		alst = next;
	}
}

void		ft_free_tetri(t_tetri *atetri)
{
	int i;

	i = 0;
	while (i < atetri->height)
	{
		ft_memdel((void **)&(atetri->tetri[i]));
		i++;
	}
	ft_memdel((void **)&(atetri));
}

void		ft_free_tab_2d(char **tab, int height)
{
	int		i;

	i = 0;
	while (i < height)
	{
		ft_memdel((void **)&tab[i]);
		i++;
	}
	free(tab);
}

t_tetri		*ft_new_tetri(char **tetri, int height, int width)
{
	t_tetri *new;

	new = (t_tetri *)ft_memalloc(sizeof(t_tetri));
	new->height = height;
	new->width = width;
	new->tetri = tetri;
	return (new);
}

int			ft_high_sqrt(int nb)
{
	int	i;

	i = 2;
	while (i * i < nb)
		i++;
	return (i);
}
