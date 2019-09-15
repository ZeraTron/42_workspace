/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 20:59:54 by kdubois           #+#    #+#             */
/*   Updated: 2019/08/31 21:00:14 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_leboncaractere(int i, int j, int x, int y)
{
	if ((i % (x-1) == 0) && ((j % (y-1) == 0)))
	{
		ft_putchar('o');
	}
	else if (j % (y-1) == 0)
	{
		ft_putchar('-');
	}
	else if (i % (x-1) == 0)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}

}

void rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(j<y)
	{
		while (i<x)
		{
			ft_leboncaractere(i, j, x, y);

			if(i == x-1)
			{
				ft_putchar('\n');
			}
			i++;
		}
		i=0;
		j++;
	}
}

