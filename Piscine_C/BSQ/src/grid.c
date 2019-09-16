/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:07:58 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/16 13:46:10 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_grid		create_struct_grid(void)
{
	t_grid	grid;

	grid.char_empty = 0;
	grid.char_obstacle = 0;
	grid.char_square = 0;
	grid.x = 0;
	grid.y = 0;
	return (grid);
}