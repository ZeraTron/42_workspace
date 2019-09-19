/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imp_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 03:56:01 by bkany             #+#    #+#             */
/*   Updated: 2019/09/18 05:05:13 by bkany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/bsq.h"

char	**ft_imp_square(char **tab_char, t_square casemax)
{
	int i;
	int j;

	i = casemax.x - (casemax.min - 1);
	j = casemax.y - (casemax.min - 1);
	while (j <= casemax.y)
	{
		while (i <= casemax.y)
		{
			tab_char[j][i] = 'X';
			i++;
		}
		j++;
	}
	return (tab_char)
}


void	ft_aff_tab(char **tab_char, int max_col, int max_lin)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[j][i] != '\n')
	{
		while (tab[j][i] != '\n')
		{
			write(1, &tab[j][i], 1);
			i++;
		}
		j++;
		i = 0;
	}
}


