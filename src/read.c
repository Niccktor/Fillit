/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaubin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 12:57:49 by msaubin           #+#    #+#             */
/*   Updated: 2019/01/12 17:06:39 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"
#include <fcntl.h>

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
		if (ft_check_input(buf, ret) == -1
				|| (tetri = ft_convert_to_tetri(buf, tetri_nb++)) == NULL)
		{
			ft_memdel((void **)&buf);
			ft_free_list(list);
			return (NULL);
		}
		ft_lstadd(&list, ft_lstnew(tetri, sizeof(t_tetri)));
		ft_memdel((void **)&tetri);
	}
	if (ret != 0)
		return (NULL);
	ft_memdel((void **)&buf);
	ft_lstrev(&list);
	return (list);
}

int		ft_check_input(char *s, int ret)
{
	int		i;

	if (ft_check_sharp(s) != 4 || ft_check_links(s) == -1)
		return (-1);
	i = 0;
	while (s[i] && i < 20)
	{
		if ((i + 1) % 5 != '\0' && (s[i] == '.' || s[i] == '#'))
			i++;
		else if ((i + 1) % 5 == 0 && s[i] == '\n')
			i++;
		else
			return (-1);
	}
	if (ret == 21 && s[20] != '\n')
		return (-1);
	else
		return (0);
}

int		ft_check_links(char *s)
{
	int	i;
	int	links;

	i = 0;
	links = 0;
	while (s[i])
	{
		if (s[i] == '#')
		{
			if (i >= 1 && s[i - 1] == '#')
				links++;
			if (i >= 5 && s[i - 5] == '#')
				links++;
			if (i < 19 && s[i + 1] == '#')
				links++;
			if (i < 15 && s[i + 5] == '#')
				links++;
		}
		i++;
	}
	if (links == 6 || links == 8)
		return (0);
	return (-1);
}

int		ft_check_sharp(char *s)
{
	int	i;
	int	sharp;

	i = 0;
	sharp = 0;
	while (s[i])
	{
		if (s[i] == '#')
			sharp++;
		i++;
	}
	return (sharp);
}
