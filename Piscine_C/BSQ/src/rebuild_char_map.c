/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rebuild_char_map.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkany <bkany@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:39:34 by bkany             #+#    #+#             */
/*   Updated: 2019/09/18 20:54:07 by bkany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/bsq.h"

char			**malloc_char_map(t_grid *map)
{
	char			**char_map;
	unsigned int	i;

	i = 0;
	char_map = (char**)malloc(map->y * sizeof(char*));
	while (i++ < map->y)
		char_map[i] = (char*)malloc(map->x * sizeof(char));
	return (char_map);
}

char    **rebuild_char_map(int **bin_map, t_grid *map)
{
    unsigned int    i;
    unsigned int    j;
    char            **tab;

    i = 0;
    j = 1;
    tab = malloc_char_map(map);
    while (j < map->x + 1)
    {
        while (i < map->y)
        {
            if (bin_map[j][i] == 0)
                tab[j][i] = map->char_obstacle;
            else
                tab[j][i] = map->char_empty;
            i++;
        }
        j++;
    }
    return (tab);
}