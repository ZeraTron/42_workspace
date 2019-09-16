/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:08:44 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/16 13:45:14 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>

typedef unsigned short	t_uns;

typedef struct			s_grid
{
	t_uns				x;
	t_uns				y;
	unsigned char		char_empty;
	unsigned char		char_obstacle;
	unsigned char		char_square;
}						t_grid;

typedef struct			s_square
{
	struct s_coord		*start;
	short				length;
}						t_square;

typedef struct			s_coord
{
	t_uns				x;
	t_uns				y;
	struct s_coord		*next;
}						t_coord;

t_uns		read_map(char *map);
t_uns		read_stdin(void);

t_grid		create_struct_grid(void);

#endif
