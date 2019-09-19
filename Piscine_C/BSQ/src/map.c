/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:30:56 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/18 18:00:47 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/bsq.h"

t_grid		init_map_struct(char *str)
{
	t_grid	map;
	int		i;

	i = 0;
	map.x = 0;
	map.y = 0;
	get_charset(str, &map);
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i] != '\n')
	{
		map.x++;
		i++;
	}
	return (map);
}

int			**malloc_bin_map(t_grid *map)
{
	int				**bin_map;
	unsigned int	i;

	i = 0;
	bin_map = (int**)malloc(map->y * sizeof(int*));
	while (i++ < map->y)
		bin_map[i] = (int*)malloc(map->x * sizeof(int));
	return (bin_map);
}

int			**build_binary_map(char *str, t_grid *map)
{
	int				**bin_map;
	t_coord			coord;
	unsigned int	i;

	i = 0;
	coord.x = 0;
	coord.y = 1;
	bin_map = malloc_bin_map(map);
	while (str[i] != '\n')
		i++;
	while (coord.y < map->y + 1)
	{
		coord.x = 0;
		while (coord.x < map->x)
		{
			if (str[i] == '\n')
				i++;
			if (str[i] == map->char_obstacle)
			bin_map[coord.y][coord.x] = 0;
			coord.x++;
			i++;
		}
		coord.y++;
	}
	return (bin_map);
}

void		bin_display(int **bin_map, t_grid *map)
{
	unsigned int x;
	unsigned int y;

	y = 1;
	while (y < map->y + 1)
	{
		x = 0;
		while (x < map->x)
		{
			ft_putchar(bin_map[y][x] % 10 + 48);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
