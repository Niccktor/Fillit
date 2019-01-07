/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrimino.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 20:58:26 by tbeguin           #+#    #+#             */
/*   Updated: 2019/01/07 23:23:42 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

t_tetri		*ft_convert_to_tetri(char *str, int tetri_nb)
{
	int		i_min;
	int		i_max;
	int		j_min;
	int		j_max;
	int 	i;

	i_min = 5;
	i_max = 0;
	j_min = 5;
	j_max = 0;
	tetri_nb = 0;
	i = 0;
	ft_putstr(str);
	ft_putstr("\n");
	while (i < 20)
	{
		if (str[i] == '#')
		{
			if (i / 5 < i_min)
				i_min = i / 5;
			if (i / 5 > i_max)
				i_max = i / 5;
			if (i % 5 < j_min)
				j_min = i % 5;
			if (i % 5 > j_max)
				j_max = i % 5;
		}
		i++;
	}
	ft_putstr("Nouveau tetris : \n");
	ft_putnbr(i_min);
	ft_putstr("\n");
	ft_putnbr(i_max);
	ft_putstr("\n");
	ft_putnbr(j_min);
	ft_putstr("\n");
	ft_putnbr(j_max);
	ft_putstr("\n");
	return (NULL);
}

