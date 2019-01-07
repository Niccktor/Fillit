/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 12:47:34 by tbeguin           #+#    #+#             */
/*   Updated: 2019/01/07 16:03:52 by tbeguin          ###   ########.fr       */
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
}
*/

int		main(void)
{
	t_map	*amap;
	char	size;
	int		i;

	size = 10;
	amap = ft_new_map(size);
	i = 0;
	while (i < amap->size)
	{
		ft_putstr("i = ");
		ft_putnbr((int)i + 1);
		ft_putstr(": ");
		ft_putstr(amap->array[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
