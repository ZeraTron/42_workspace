/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:53:02 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/19 10:43:33 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int tab[10][10])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (tab[j][i])
			{
				c = '0' + j;
				write(1, &c, 1);
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

int		check(int tab[10][10], int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < x)
		if (tab[i++][y])
			return (0);
	i = x;
	j = y;
	while (j >= 0 && i >= 0)
		if (tab[i--][j--])
			return (0);
	i = x;
	j = y;
	while (i >= 0 && j < 10)
		if (tab[i--][j++])
			return (0);
	return (1);
}

int		backtrack(int tab[10][10], int x, int y, int *nbr)
{
	if (x >= 10)
	{
		print(tab);
		*nbr = *nbr + 1;
	}
	while (y < 10)
	{
		if (check(tab, x, y))
		{
			tab[x][y] = 1;
			backtrack(tab, x + 1, 0, nbr);
			tab[x][y] = 0;
		}
		y++;
	}
	return (0);
}

int		ft_ten_queens_puzzle(void)
{
	int	tab[10][10];
	int	nbr;
	int	b;

	nbr = 0;
	while (nbr < 10)
	{
		b = 0;
		while (b < 10)
		{
			tab[nbr][b] = 0;
			b++;
		}
		nbr++;
	}
	nbr = 0;
	backtrack(tab, 0, 0, &nbr);
	return (nbr);
}
