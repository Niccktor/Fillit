/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 15:14:41 by tbeguin           #+#    #+#             */
/*   Updated: 2019/01/20 14:03:50 by msaubin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

t_map		*ft_new_map(char size)
{
	t_map	*new;
	int		i;
	int		j;

	new = (t_map *)ft_memalloc(sizeof(t_map));
	new->size = size;
	new->array = (char **)ft_memalloc(size * sizeof(char *));
	i = 0;
	while (i < size)
	{
		new->array[i] = ft_strnew(size * sizeof(char));
		j = 0;
		while (j < size)
		{
			new->array[i][j] = '.';
			j++;
		}
		i++;
	}
	return (new);
}

t_tetri		*ft_new_tetri(char **tetri, int height, int width)
{
	t_tetri *new;

	new = (t_tetri*)(ft_memalloc(sizeof(t_tetri)));
	new->height = height;
	new->width = width;
	new->tetri = tetri;
	return (new);
}

char		**ft_new_tab_2d(int height, int width)
{
	char	**new;
	int		i;

	new = (char **)ft_memalloc(height * sizeof(char *));
	i = 0;
	while (i < height)
	{
		if (!(new[i] = (char *)malloc(sizeof(char) * (width + 1))))
			return (NULL);
		new[i][width + 1] = '\0';
		i++;
	}
	return (new);
}

int			ft_high_sqrt(int nb)
{
	int i;

	i = 2;
	while (i * i < nb)
		i++;
	return (i);
}
