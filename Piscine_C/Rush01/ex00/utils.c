/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:05:05 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/08 16:50:17 by pbouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	affichage(int **map)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(map[i][j] + '0');
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		ft_not_on_col(int n, int **map, int j)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (map[i][j] == n)
			return (0);
		i++;
	}
	return (1);
}

int		ft_not_on_row(int n, int **map, int i)
{
	int j;

	j = 0;
	while (j < 4)
	{
		if (map[i][j] == n)
			return (0);
		j++;
	}
	return (1);
}
