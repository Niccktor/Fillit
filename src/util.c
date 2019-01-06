/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 14:36:52 by tbeguin           #+#    #+#             */
/*   Updated: 2019/01/06 15:18:10 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

void	ft_free_list(t_list *alst)
{
	t_tetri *cur;
	t_list	*next;

	while (alst)
	{
		next = alst->next;
		cur = (t_tetri *)alst->content;
		ft_free_tetri(curr);
		ft_memdel((void **)alst);
		alst = new;
	}
}

void	ft_free_tetri(t_tetri *tetri)
{
	char i;

	if (t_tetri == NULL)
		return (0);
	i = 0;
	while (i < height)
	{
		ft_memdel((void **)&(tetri->tetri[i]));
		i++;
	}
	ft_memdel((void **)&(tetri->tetri));
	ft_memdel((void **)&(tetri->height));
	ft_memdel((void **)&(tetri->width));
	ft_memdel((void **)&(tetri));
}

t_tetri		ft_new_tetri(char **tetri, char height, char width)
{
	t_tetri new;

	new = (t_tetri)malloc(sizeof(t_tetri));
	if (new == NULL)
		return (-1);
	new->height = height;
	new->width = width;
	new->tetri = tetri;
	return (new);
}
