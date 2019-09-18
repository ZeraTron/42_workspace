/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remplissage_carre2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 23:11:13 by bkany             #+#    #+#             */
/*   Updated: 2019/09/18 03:48:22 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_min(int a, int b, int c)
{
	int tmp;

	if (a <= b)
		tmp = a;
	else
		tmp = b;
	if (tmp <= c)
		return (tmp);
	else
		return (c);
}

void	ft_remplissqge_carre2(char **tab, int max_col, int max_lin)
{
	int i;
	int j;

	i = 0;
	j = 0;
// ATTENTION TAILLE DU TABLEAU SUR MAX COL ET MAX LIN
	while (j < max_lin && j > 0)
	{
		while (i < max_col && i > 0)
		{
			tab[j][i] = ft_min(tab[j - 1][i], tab[j][i - 1], 
					tab[j - 1][i - 1]) + 1;
			i++;
		}
	j++;
	i = 0;
	}

}
