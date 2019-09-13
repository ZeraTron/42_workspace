/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:17:05 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/13 17:32:18 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb)
{
	int i;
	unsigned int nbr;

	if (nb < 0)
		return (0);
	i = 1;
	nbr = nb;
	while (i < nb)
	{
		nbr = nbr * i;
		i++;
	}
	return (nbr);
}

int main(void)
{
	int dee = ft_iterative_power(5);
	printf("%d\n", dee);
}
