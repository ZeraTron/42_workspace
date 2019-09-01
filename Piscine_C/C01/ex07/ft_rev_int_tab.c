/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 01:15:46 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/01 13:15:09 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int *swapper[2];
	int helper[size + 1];
	int i;

	i = 0;
	swapper[0] = tab;
	swapper[1] = helper;
	while (i <= size)
	{
		swapper[1][i] = swapper[0][size - i];
		++i;
	}
	i = 0;
	while (i <= size + 1)
	{
		swapper[0][i] = swapper[1][i + 1];
		++i;
	}
}

void	ft_print_array_ptr(int *arr, int size)
{
	int	i;

	i = 0;
	while (i <= size - 1)
	{
		printf("arr[%d]: %d | ", i, arr[i]);
		++i;
	}
	printf("\n");
}

int	main(void)
{
	int	table[5];

	table[0] = 40;
	table[1] = 41;
	table[2] = 42;
	table[3] = 43;
	table[4] = 44;

	ft_print_array_ptr(table, 5);
	ft_rev_int_tab(table, 5);
	ft_print_array_ptr(table, 5);
}
