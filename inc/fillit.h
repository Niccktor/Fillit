/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 14:03:02 by tbeguin           #+#    #+#             */
/*   Updated: 2019/01/07 18:03:24 by tbeguin          ###   ########.fr       */
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

typedef struct	s_map
{
	char		**array;
	char		size;
}				t_map;

int		ft_read(char *s);

void	ft_free_list(t_list *alst);
void	ft_free_tetri(t_tetri *tetri);
void	ft_free_tab_2d(char **tab, int height);
char	**ft_new_tab_2d(int height, int width);
t_tetri	*ft_new_tetri(char **tetri, int height, int width);
int		ft_high_sqrt(int nb);

void	ft_free_map(t_map *amap);
t_map	*ft_new_map(char size);

#endif
