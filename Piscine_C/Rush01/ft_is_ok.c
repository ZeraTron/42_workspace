/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_ok.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 12:50:48 by pbouet            #+#    #+#             */
/*   Updated: 2019/09/08 16:47:00 by pbouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "ft_controls.h"

int		ft_is_ok(int **map, int *c_ud, int *r_lr, int p)
{
	int i;
	int j;
	int n;

	if (p == 4 * 4)
		return (1);
	n = 4;
	i = p / 4;
	j = p % 4;
	while (n >= 1)
	{
		if (ft_not_on_row(n, map, i) && ft_not_on_col(n, map, j) &&
		ft_ok_leftrow(n, map, p, r_lr) && ft_ok_rightrow(n, map, p, r_lr)
		&& ft_ok_downcol(n, map, p, c_ud) && ft_ok_upcol(n, map, p, c_ud))
		{
			map[i][j] = n;
			if (ft_is_ok(map, c_ud, r_lr, p + 1))
				return (1);
		}
		n--;
	}
	map[i][j] = 0;
	return (0);
}
