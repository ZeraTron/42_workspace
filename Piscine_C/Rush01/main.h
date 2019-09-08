/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:10:25 by pbouet            #+#    #+#             */
/*   Updated: 2019/09/08 16:44:42 by pbouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

int		ft_check_input(char *str);
void	ft_store_rules(char *str, int *c_ud, int *r_lr);
int		ft_is_ok(int **map, int *c_ud, int *r_lr, int p);
void	affichage(int **map);

#endif
