/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 11:20:21 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/18 11:20:23 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	*range = NULL;
	i = -1;
	if (min >= max)
		return (0);
	if ((*range = (int*)malloc(sizeof(int) * (max - min))) == NULL)
		return (0);
	while (++i < (max - min))
		(*range)[i] = i + min;
	return (i);
}
