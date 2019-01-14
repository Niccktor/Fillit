/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 14:36:52 by tbeguin           #+#    #+#             */
/*   Updated: 2019/01/14 13:22:08 by tbeguin          ###   ########.fr       */
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
		ft_free_tetri(cur);
//		free(&(alst->content));            	    // ??
		ft_memdel((void **)alst);
		alst = next;
	}
}

void	ft_free_tetri(t_tetri *atetri)
{
	int i;

	i = 0;
	while (i < atetri->height)
	{
		ft_memdel((void **)&(atetri->tetri[i]));
		i++;
	}
	ft_memdel((void **)&(atetri->tetri));
//	free (atetri);
//	free(&(atetri));					//		??
//	ft_memdel((void **)&(atetri));		//		??
//	ft_memdel((void **)atetri);			//
}

void	ft_free_map(t_map *amap)
{
	int i;

	i = 0;
	while (i < amap->size)
	{
		ft_memdel((void **)&(amap->array[i]));
		i++;
	}
	ft_memdel((void **)&(amap->array));
	ft_memdel((void **)&(amap));
}
