/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 11:40:31 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/19 11:40:33 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ret;
	int	i;

	if (length < 1 || !(ret = malloc(length * sizeof(int))))
		return (NULL);
	i = -1;
	while (++i < length)
		ret[i] = f(tab[i]);
	return (ret);
}
