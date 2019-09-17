/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:08:44 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/17 20:58:02 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

#define BUF_SIZE	4096

typedef struct			s_grid
{
	unsigned int		x;
	unsigned int		y;
	unsigned char		char_empty;
	unsigned char		char_obstacle;
	unsigned char		char_square;
}						t_grid;

typedef struct			s_square
{
	unsigned int		len;
	struct s_coord		*node;
}						t_square;

typedef struct			s_coord
{
	unsigned int		x;
	unsigned int		y;
	unsigned char		content;
	struct s_coord		*next;
}						t_coord;

void destroy_map(int **arr);
int **create_map(int m, int n);
int		read_map(char *map);
//int		read_stdin(void);

t_grid		create_struct_grid(void);

#endif
