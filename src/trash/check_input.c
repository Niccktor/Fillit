/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaubin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 14:40:59 by msaubin           #+#    #+#             */
/*   Updated: 2019/01/07 21:35:34 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_links(char *s)
{
	int		i;
	int		links;

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
	int		i;
	int		sharp;

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

int		ft_check_input(char *s)
{
	int		i;

	if (ft_check_sharp(s) != 4)
		return (-1);
	if (ft_check_links(s) == -1)
		return (-1);
	i = 0;
	while (s[i] && i < 20)
	{
		if ((i + 1) % 5 != '\0' && (s[i] == '.'|| s[i] == '#'))
			i++;
		else if ((i + 1) % 5 == 0 && s[i] == '\n')
			i++;
		else
			return (-1);
	}
	if (i == 20 && ((s[i] == '\n' && s[i + 1] == '\0') || s[i] == '\0'))
		//verifier que l'on a un backslash 0 au 21e caractere
		//on peut modifier la condition en fct du nb de caractere lu, add param
		return (1);
	else
		return (-1);
}
