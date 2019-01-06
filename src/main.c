/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 12:47:34 by tbeguin           #+#    #+#             */
/*   Updated: 2019/01/06 16:46:35 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"
/*
int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (-1);
	}
	if (ft_read(argv[1]) == -1)
	{
		ft_putstr("error\n");
		return (-1);
	}
	
	return (0);
}*/

int 	main(void)
{
	int i;

	i = 2;
	while (i < 100)
	{
		ft_putstr("sqrt de :");
		ft_putnbr(i);
		ft_putstr(" est ");
		ft_putnbr(ft_high_sqrt(i));
		ft_putstr("\n");
		i++;		
	}
	return (0);
}
