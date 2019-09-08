/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:59:24 by pbouet            #+#    #+#             */
/*   Updated: 2019/09/08 18:05:26 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_init_map(int **map)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		map[i] = (int*)malloc(4 * sizeof(int));
		if (map[i] == 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		j = 0;
		while (j < 4)
		{
			map[i][j] = 0;
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_free_map(int **map)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(map[i]);
		i++;
	}
	free(map);
}
