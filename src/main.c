/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 12:47:34 by tbeguin           #+#    #+#             */
/*   Updated: 2019/01/13 20:50:31 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"
					//main fin
int		main(int argc, char **argv)
{
	t_list	*alst;

	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (-1);
	}
	if ((alst = ft_read_tetri(argv[1], 0)) == NULL)
	{
		ft_putstr("error\n");
		return (-1);
	}
	ft_solve(alst);
	sleep(20);
	return (0);
}
