/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_controls.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:52:46 by pbouet            #+#    #+#             */
/*   Updated: 2019/09/08 16:49:13 by pbouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONTROLS_H
# define FT_CONTROLS_H

int	ft_ok_upcol(int k, int **map, int p, int *col_u);
int	ft_ok_downcol(int k, int **map, int p, int *col_d);
int	ft_ok_leftrow(int k, int **map, int p, int *row_l);
int	ft_ok_rightrow(int k, int **map, int p, int *row_r);

#endif
