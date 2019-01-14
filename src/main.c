/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 12:47:34 by tbeguin           #+#    #+#             */
/*   Updated: 2019/01/14 14:02:07 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

int		main(int argc, char **argv)
{
	t_list	*alst;
	int		fd;

	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (-1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1 || (alst = ft_read_tetri(fd)) == NULL)
	{
		ft_putstr("error\n");
		return (-1);
	}
	ft_solve(alst);
	ft_free_list(alst);
	return (0);
}
