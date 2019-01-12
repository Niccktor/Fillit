/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 14:03:02 by tbeguin           #+#    #+#             */
/*   Updated: 2019/01/12 17:21:13 by tbeguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "../lib/libft/libft.h"
# include <fcntl.h>

typedef struct	s_tetri
{
	char		height;
	char		width;
	char		**tetri;
}				t_tetri;

typedef struct	s_map
{
	char		**array;
	char		size;
}				t_map;

/*
 *				read.c
 */
t_list			*ft_read_tetri(char *s, int fd);
int				ft_check_input(char *s, int ret);
int				ft_check_links(char *s);
int				ft_check_sharp(char *s);
/*
 *				tetrimino.c
 */
t_tetri			*ft_convert_to_tetri(char *str, int tetri_nb);
t_tetri			*ft_get_tetrimino(char *str, int tetri_nb, int *len_tetri);
/*
 *				util.c
 */
void			ft_free_list(t_list *alst);
void			ft_free_tetri(t_tetri *tetri);
void			ft_free_tab_2d(char **tab, int height);
/*
 *				util_2.c
 */
t_map			*ft_new_map(char size);
t_tetri			*ft_new_tetri(char **tetri, int height, int width);
char			**ft_new_tab_2d(int height, int width);
int				ft_high_sqrt(int nb);

#endif
