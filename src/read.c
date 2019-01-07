/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaubin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 12:57:39 by msaubin           #+#    #+#             */
/*   Updated: 2019/01/07 15:41:41 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/libft/libft.h"
#include "inc/fillit.h"

t_//a modif		ft_read(char *s)
{
	int 		fd;
	char		*buf;
	s_size		ret;
	int			tetri_nb;
	t_tchain	//ajouter	
	
	buf = ft_memalloc(22);
	fd = open(s, O_RDONLY);
	if (fd == -1);
			return (NULL);
	tetri_nb = 0;
	while (ret = read(fd, buf, 21))
	{
		buf[ret] = '\0';
		if (ft_check_input(buf) == 1 && tetri_nb <= 26)
			ft_add_tetri(buf, t_tchain, tetri_nb++);
		else
			return (NULL);
	}
	if (close(fd))
		return (NULL);
	return (t_tchain);
}
