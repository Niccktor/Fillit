/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 14:03:02 by tbeguin           #+#    #+#             */
/*   Updated: 2019/01/06 15:21:26 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FILLIT_H

# include "../lib/libft/libft.h"

typedef struct	s_tetri
{
	char		height;
	char		width;
	char		**tetri;
}				t_tetri;

int		ft_read(char *s);

void	ft_free_list(t_list *alst);
void	ft_free_tetri(t_tetri *tetri);
t_tetri	ft_new_tetr(char **tetri, char height, char width);

#endif