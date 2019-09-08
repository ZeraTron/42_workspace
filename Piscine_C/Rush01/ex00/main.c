/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 09:35:11 by pbouet            #+#    #+#             */
/*   Updated: 2019/09/08 18:05:47 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include "ft_map.h"

int		main(int argc, char **argv)
{
	int	**map;
	int	col_ud[8];
	int	row_lr[8];

	map = (int**)malloc(4 * sizeof(int*));
	if (map == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if ((argc != 2) || (ft_check_input(argv[1]) != 1) || (!ft_init_map(map)))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_store_rules(argv[1], col_ud, row_lr);
	ft_is_ok(map, col_ud, row_lr, 0);
	if (map[0][0] == 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	affichage(map);
	ft_free_map(map);
	return (0);
}
