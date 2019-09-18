/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialisation_carre.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 00:12:53 by bkany             #+#    #+#             */
/*   Updated: 2019/09/18 03:46:59 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/bsq.h"

// Initialisation du carre
void	ft_initialisation_carre(int **tab_int, int max_col, int max_lin)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < max_col)
	{
		if (tab_int[0][i] != 0)
			tab_int[0][i] = 1;
		i++;
	}
	while (j < max_lin)
	{
		if (tab_int[j][0] != 0)
			tab_int[j][0] = 1;
		j++;
	}
}
