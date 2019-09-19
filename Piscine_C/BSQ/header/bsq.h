/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkany <bkany@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:08:44 by kdubois           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/09/18 22:22:17 by kdubois          ###   ########.fr       */
=======
/*   Updated: 2019/09/18 20:51:34 by bkany            ###   ########.fr       */
>>>>>>> 27772be3a31287db50882a2f0f52d4385750e517
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

typedef struct			s_grid
{
	unsigned int		x;
	unsigned int		y;
	unsigned char		char_empty;
	unsigned char		char_obstacle;
	unsigned char		char_square;
}						t_grid;

typedef struct			s_coord
{
	unsigned int		x;
	unsigned int		y;
}						t_coord;

typedef struct			s_square
{
	unsigned int		len;
	struct s_coord		*node;
}						t_square;

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

t_grid 	init_map_struct(char *str);
int		**malloc_bin_map(t_grid *map);
int 	**build_binary_map(char *str, t_grid *map);
void 	bin_display(int **bin_map, t_grid *map);

char	*open_file(char *file);
void 	get_charset(char *str, t_grid *map);
int 	get_current_char(char c, t_grid *map);

void	ft_init_square(int **tab_int, t_grid *map);
void	ft_fill_square(int **tab, t_grid *map);
int		ft_case_max(int **tab, t_grid *map);
t_coord		ft_case_max2(int **tab, t_grid *map);
char    **rebuild_char_map(int **bin_map, t_grid *map);


#endif
