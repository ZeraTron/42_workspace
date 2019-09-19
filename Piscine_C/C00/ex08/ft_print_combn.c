/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 11:39:56 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/19 07:24:11 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
​
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
​
void	ft_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}
​
void	ft_n(int tab[], int n)
{
	int i;
	int y;
​
	i = 0;
	y = 1;
	while (i < n - 1)
	{
		if ((tab[i] >= tab[i + 1]))
			y = 0;
		i++;
	}
	if (y == 1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(tab[i]);
			i++;
		}
		if (tab[0] != '8')
			ft_space();
	}
}
​
void	ft_while(int tabx[], int k, int n)
{
	if (k == n - 1)
	{
		tabx[k] = '0';
		while (tabx[k] < ':')
		{
			ft_n(tabx, n);
			tabx[k]++;
		}
	}
	else
	{
		tabx[k] = '0';
		while (tabx[k] < ':')
		{
			ft_while(tabx, k + 1, n);
			tabx[k]++;
		}
	}
}
​
void	ft_print_combn(int n)
{
	int x[n];
​
	ft_while(x, 0, n);
}