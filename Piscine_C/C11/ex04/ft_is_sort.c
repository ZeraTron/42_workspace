/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 11:44:32 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/19 11:44:38 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int r;
	int r2;

	i = 1;
	while (i < length && !(r = f(tab[i - 1], tab[i])))
		i++;
	while (i < length)
	{
		r2 = f(tab[i - 1], tab[i]);
		if ((r < 0 && r2 > 0) || (r > 0 && r2 < 0))
			return (0);
		i++;
	}
	return (1);
}
