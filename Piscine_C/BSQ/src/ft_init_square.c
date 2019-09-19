/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialisation_carre.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 00:12:53 by bkany             #+#    #+#             */
/*   Updated: 2019/09/18 03:46:59 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/bsq.h"

// Initialisation du carre
void	ft_init_square(int **tab_int, t_grid *map)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 1;
	while (i < map->x)
	{
		if (tab_int[1][i] != 0)
			tab_int[1][i] = 1;
		i++;
	}
	while (j < map->y+1)
	{
		if (tab_int[j][0] != 0)
			tab_int[j][0] = 1;
		j++;
	}
}
