/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 11:20:28 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/18 11:20:30 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *a;
	int b;

	if (min >= max)
		return (NULL);
	if (max - min - 1)
		max = max - 1;
	b = -1;
	a = malloc(sizeof(int) * (max - min));
	while (++b <= max - min)
		a[b] = b + min;
	return (a);
}
