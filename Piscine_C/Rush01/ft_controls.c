/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_controls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:34:19 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/08 18:00:44 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ok_upcol(int k, int **map, int p, int *col_ud)
{
	int rule;
	int nb_visible;
	int y;
	int max;

	rule = col_ud[p % 4];
	y = 0;
	max = 0;
	nb_visible = 0;
	map[p / 4][p % 4] = k;
	while (y < 4)
	{
		if (map[y][p % 4] > max)
		{
			max = map[y][p % 4];
			nb_visible++;
		}
		y++;
	}
	map[p / 4][p % 4] = 0;
	if ((nb_visible != rule) && ((p / 4) == 3))
		return (0);
	return (1);
}

int		ft_ok_downcol(int k, int **map, int p, int *col_ud)
{
	int rule;
	int nb_visible;
	int y;
	int max;

	rule = col_ud[4 + p % 4];
	y = 3;
	max = 0;
	nb_visible = 0;
	map[p / 4][p % 4] = k;
	while (y >= 0)
	{
		if (map[y][p % 4] > max)
		{
			max = map[y][p % 4];
			nb_visible++;
		}
		y--;
	}
	map[p / 4][p % 4] = 0;
	if ((nb_visible != rule) && ((p / 4) == 3))
		return (0);
	return (1);
}

int		ft_ok_leftrow(int k, int **map, int p, int *row_lr)
{
	int rule;
	int nb_visible;
	int x;
	int max;

	rule = row_lr[p / 4];
	x = 0;
	max = 0;
	nb_visible = 0;
	map[p / 4][p % 4] = k;
	while (x < 4)
	{
		if (map[p / 4][x] > max)
		{
			max = map[p / 4][x];
			nb_visible++;
		}
		x++;
	}
	map[p / 4][p % 4] = 0;
	if ((nb_visible != rule) && ((p % 4) == 3))
		return (0);
	return (1);
}

int		ft_ok_rightrow(int k, int **map, int p, int *row_lr)
{
	int rule;
	int nb_visible;
	int x;
	int max;

	rule = row_lr[4 + p / 4];
	x = 3;
	max = 0;
	nb_visible = 0;
	map[p / 4][p % 4] = k;
	while (x >= 0)
	{
		if (map[p / 4][x] > max)
		{
			max = map[p / 4][x];
			nb_visible++;
		}
		x--;
	}
	map[p / 4][p % 4] = 0;
	if ((nb_visible != rule) && ((p % 4) == 3))
		return (0);
	return (1);
}
