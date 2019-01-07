/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 15:14:41 by tbeguin           #+#    #+#             */
/*   Updated: 2019/01/07 15:39:45 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"
/*
void	ft_print_map(t_map *amap)
{

}
*/
void	ft_free_map(t_map *amap)
{
	ft_free_tab_2d(amap->array, amap->size);
	ft_memdel((void **)&(amap));
}

t_map	*ft_new_map(char size)
{
	t_map	*new;
	int		i;

	new = (t_map *)ft_memalloc(sizeof(t_map));
	new->size = size;
	new->array = (char **)ft_memalloc(size * sizeof(char *));
	i = 0;
	while (i < size)
	{
		new->array[i] = ft_strnew(size * sizeof(char));
		ft_memset((void *)new->array[i], '.',(size_t)new->size);
		i++;
	}
	return (new);
}
