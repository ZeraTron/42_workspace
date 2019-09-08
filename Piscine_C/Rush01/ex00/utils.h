/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 11:27:04 by pbouet            #+#    #+#             */
/*   Updated: 2019/09/08 16:49:48 by pbouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

int		ft_not_on_col(int n, int **map, int j);
int		ft_not_on_row(int n, int **map, int i);
void	ft_putchar(char c);
void	affichage(int **map);

#endif
