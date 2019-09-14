/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:17:05 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/14 13:51:41 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int				i;
	unsigned int	nbr;

	if (nb < 0 || power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	i = 1;
	nbr = nb;
	while (i < nb)
	{
		nbr = nbr * power;
		i++;
	}
	return (nbr);
}

int	main(void)
{
	int dee = ft_iterative_power(8, 2);
	printf("%d\n", dee);
}
