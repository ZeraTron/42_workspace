/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 04:05:14 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/19 04:05:23 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_length(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_conv_base_atoi(char *str, char *base, int i)
{
	int j;

	j = 0;
	while (base[j])
	{
		if (str[i] == base[j])
			return (j);
		j++;
	}
	return (-1);
}

int		checkbase(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i] || base[i] == '-' || base[i] == '+' ||
					base[i] <= ' ' || base[i] > '~' || base[j] == '-' ||
					base[j] == '+' || base[j] <= ' ' || base[j] > '~')
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}
