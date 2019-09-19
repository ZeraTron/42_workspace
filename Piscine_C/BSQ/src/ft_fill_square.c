/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remplissage_carre2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 23:11:13 by bkany             #+#    #+#             */
/*   Updated: 2019/09/18 03:48:22 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/bsq.h"

int		ft_min(int a, int b, int c)
{
	int tmp;

	if (a <= b)
		tmp = a;
	else
		tmp = b;
	if (tmp <= c)
		return (tmp);
	else
		return (c);
}

void	ft_fill_square(int **tab, t_grid *map)
{
	unsigned int i;
	unsigned int j;

	i = 1;
	j = 2;
	while (j < map->y + 1 && j > 1)
	{
		while (i < map->x && i > 0)
		{
			if (tab[j][i] != 0)
				tab[j][i] = ft_min(tab[j - 1][i], tab[j][i - 1], 
					tab[j - 1][i - 1]) + 1;
			i++;
		}
		i = 1;
		j++;
	}
}
