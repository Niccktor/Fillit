/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrimino.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 20:58:26 by tbeguin           #+#    #+#             */
/*   Updated: 2019/01/11 17:23:53 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

t_tetri		*ft_convert_to_tetri(char *str, int tetri_nb)
{
	int	len_tetri[4];
	int i;

	len_tetri[0] = 5;
	len_tetri[1] = 0;
	len_tetri[2] = 5;
	len_tetri[3] = 0;
	i = 0;
	while (i < 20)
	{
		if (str[i] == '#')
		{
			if (len_tetri[0] > i / 5)
				len_tetri[0] = i / 5;
			if (len_tetri[1] < i / 5)
				len_tetri[1] = i / 5;
			if (len_tetri[2] > i % 5)
				len_tetri[2] = i % 5;
			if (len_tetri[3] < i % 5)
				len_tetri[3] = i % 5;
		}
		i++;
	}
	/*ft_putstr("Nouveau tetris : \n");
	ft_putstr(str);
	ft_putnbr(len_tetri[0]);
	ft_putstr("\n");
	ft_putnbr(len_tetri[1]);
	ft_putstr("\n");
	ft_putnbr(len_tetri[2]);
	ft_putstr("\n");
	ft_putnbr(len_tetri[3]);
	ft_putstr("\n");*/
	return (ft_get_tetrimino(str, tetri_nb, len_tetri));
}

t_tetri		*ft_get_tetrimino(char *str, int tetri_nb, int *len_tetri)
{
	/*t_tetri *new;*/
	char	**tetrimino;
	int		i;
	int		j;

	tetrimino = ft_new_tab_2d((len_tetri[1] - len_tetri[0]) + 2,\
			(len_tetri[3] - len_tetri[2]) + 2);
	i = 0;
	while ((len_tetri[0] + i) <= len_tetri[1])
	{
		j = 0;
		while((len_tetri[2] + j) <= len_tetri[3])
		{
			if (str[((len_tetri[0] + i) * 5) + len_tetri[2] + j] == '#')
				tetrimino[i][j] = 'A' + tetri_nb;
			else
				tetrimino[i][j] = '.';
			j++;
		}
		i++;
	}
/*	new = ft_new_tetri(tetrimino, (len_tetri[1] - len_tetri[0]) + 1,\
			(len_tetri[3] - len_tetri[2]) + 1);
	i = 0;
	while (i <= (len_tetri[1] - len_tetri[0]))
	{
		ft_putstr(tetrimino[i]);
		ft_putstr("\n");
		i++;
	}
	ft_putstr("\n");
	return (NULL);*/
	return (ft_new_tetri(tetrimino, (len_tetri[1] - len_tetri[0]) + 1,\
			(len_tetri[3] - len_tetri[2]) + 1));
}
