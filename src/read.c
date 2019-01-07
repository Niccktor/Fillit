/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c		                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaubin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 12:57:39 by msaubin           #+#    #+#             */
/*   Updated: 2019/01/07 21:54:43 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

t_list	*ft_read_tetri(char *s, int fd)
{
	char		*buf;
	ssize_t		ret;
	int			tetri_nb;
	t_list		*list;
	t_tetri		*tetri;
	
	buf = ft_strnew(21); 
	list = NULL;
	fd = open(s, O_RDONLY);
	tetri_nb = 0;
	while ((ret = read(fd, buf, 21)) >= 20)
	{
		if (ft_check_input(buf) == -1 || (tetri = ft_get_tetri(buf, tetri_nb)) == NULL)
		{
			ft_memdel((void **)&buf);
			free_list(&list);
			return (-1);
		}
		ft_lstadd(&lislt, ft_lstnew(tetri, sizeof(t_tetri)));
		ft_free_tetri(tetri);
		tetri_nb++;
	}
	(ret != 0) ? return (NULL) : ft_lstrev(&list);
	return (list);
}
