/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 12:47:34 by tbeguin           #+#    #+#             */
/*   Updated: 2019/01/07 18:16:53 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (-1);
	}
	/*if (ft_read(argv[1]) == -1)
	{
		ft_putstr("error\n");
		return (-1);
	}	*/
	return (0);
}

/*
int		main(void)		//test leaks tetris
{
	char		**map;
	t_tetri		*atetri;

	map = ft_new_tab_2d(2, 3);
	atetri = ft_new_tetri(map, 2, 3);
	ft_free_tetri(atetri);
	
	map = ft_new_tab_2d(2, 3);
	atetri = ft_new_tetri(map, 2, 3);
	ft_putstr("pas de leaks \n");
	sleep(5);
	ft_free_tetri(atetri);

	map = ft_new_tab_2d(2, 3);
	atetri = ft_new_tetri(map, 2, 3);
	map = ft_new_tab_2d(2, 3);
	atetri = ft_new_tetri(map, 2, 3);
	ft_putstr("leaks !\n");
	sleep(5);
	return (0);
}*/

/*						//test leaks tab2d
int		main(void)
{
	char	**tetris;

	tetris = ft_new_tab_2d(2, 3);
	ft_free_tab_2d(tetris, 2);
	tetris = ft_new_tab_2d(2, 3);
	ft_putstr("pas de leaks \n");
	sleep(5);
	ft_free_tab_2d(tetris, 2);
	tetris = ft_new_tab_2d(2, 3);
	tetris = ft_new_tab_2d(2, 3);
	ft_putstr("leaks !\n");
	sleep(5);
}
*/
/* 						//	test leaks t_map
int		main(void)
{
	t_map	*amap;

	amap = ft_new_map(10);
	ft_free_map(amap);
	amap = ft_new_map(10);
	ft_putstr("pas de leaks \n");
	sleep(5);
	ft_free_map(amap);
	amap = ft_new_map(10);
	amap = ft_new_map(10);
	ft_putstr("leaks !\n");
	sleep(5);

	return (0);
}*/
