/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 00:16:37 by bkany             #+#    #+#             */
/*   Updated: 2019/09/18 03:21:58 by bkany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/bsq.h"

int		ft_case_max(int **tab, t_grid *map)
{
	unsigned int i;
	unsigned int j;
	int max;

	i = 0;
	j = 1;
	max = 0;
	while (j < map->y + 1)
	{
		while (i < map->x)
		{
			if (tab[j][i] > max)
			{
				max = tab[j][i];
			}
		i++;
		}
		i = 0;
		j++;
	}
	return (max);
}

t_coord		ft_case_max2(int **tab, t_grid *map)
{
	unsigned int i;
	unsigned int j;
	t_coord	s_max;	

	i = 0;
	j = 1;
	while (j < map->y+1)
	{
		while (i < map->x)
		{
			if (tab[j][i] == ft_case_max(tab, map))
			{
				s_max.x = i;
				s_max.y = j;
				return (s_max);
			}
			i++;
		}
		j++;
		i = 0;
	}
	s_max.y = 0;
	s_max.x= 0;
	return (s_max);
}
