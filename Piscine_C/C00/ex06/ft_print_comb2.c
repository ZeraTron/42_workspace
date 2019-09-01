/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 11:31:07 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/01 03:16:56 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printer(int nbr)
{
	int	a;
	int	b;

	if (nbr > 9)
	{
		a = nbr / 10;
		b = nbr % 10;
		ft_putchar(a + 48);
		ft_putchar(b + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nbr + 48);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	x;

	i = 0;
	while (i <= 99)
	{
		x = i + 1;
		while (o <= 99)
		{
			printer(i);
			ft_putchar(' ');
			printer(x);
			if (i < 98 || x < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			++x;
		}
		++i;
	}
}
