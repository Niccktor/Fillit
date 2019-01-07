/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaubin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 14:40:59 by msaubin           #+#    #+#             */
/*   Updated: 2019/01/07 18:47:12 by msaubin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return (links);
}

int		ft_check_sharp(char *s)
{
	int		i;
	int		sharp;

	i = 0;
	sharp = 0;
	while (s[i++])
		if (s[i] == '#')
			sharp++;
	return (sharp);
}

int		ft_check_input(char *s)
{
	int		i;

	if (ft_check_sharp(s) != 4)
		return (-1);
	if (ft_check_links(s) < 6)
		return (-1);
	i = 0;
	while (s[i] && i < 21)
	{
		if (i % 5 != 0 && (s[i] == '.' || s[i] == '#'))
			i++;
		else if (i % 5 == 0 && s[i] == '\n')
			i++;
		else
			return (-1);
	}
	if (i == 21 && ((s[i] == '\n' && s[i + 1] == '\0') || s[i] == '\0'))
		return (1);
	else
		return (-1);
}
