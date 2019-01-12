/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 18:33:16 by tbeguin           #+#    #+#             */
/*   Updated: 2019/01/12 19:33:15 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

int		ft_solve(t_list *lst)
{
	t_map	*map;
	int		size;

	size = ft_high_sqrt(ft_lstcount(lst) * 4);
	map = ft_new_map(size);
/*	ft_putstr(map->array[0]);
	ft_putstr("\n");
	ft_putstr(map->array[1]);
	ft_putstr("\n");
	ft_putstr(map->array[2]);
	ft_putstr("\n");
	ft_putstr(map->array[4]);*/
	while (ft_solve_next(map, lst) == -1)
	{
		size++;
		ft_free_map(map);
		map = ft_new_map(size);
	}
	return (0);
}

int		ft_solve_next(t_map *map, t_list *lst)
{
	int 	i;
	int		j;

	if (lst == NULL)
		return (0);
	i = 0;
	while (i < map->size)
	{
		j = 0;
		while (j < map->size)
		{
			if (ft_put_tetri(map, (t_tetri *)(lst->content), i, j))
				return (ft_solve_next(map, lst->next));
			//else
			//	ft_del_tetri(map, lst->content, i, j);
			j++;
		}
		i++;
	}
	return (-1);
}

int		ft_put_tetri(t_map *map, t_tetri *atetri, int i_put, int j_put)
{
	int	i;
	int	j;

	i = 0;
	if (atetri->height + i_put > map->size || atetri->width + j_put > map->size)
		return (-1);
	while (i < atetri->width)
	{
		j = 0;
		while (j < atetri->height)
		{
			if (map->array[i + i_put][j + j_put] == '.')
				map->array[i + i_put][j + j_put] = atetri->tetri[i][j];
			j++;
		}
		i++;
	}
	return (0);
}
