/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 00:16:37 by bkany             #+#    #+#             */
/*   Updated: 2019/09/18 03:21:58 by bkany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_case_max(int **tab, int max_col, int max_lin)
{
	int i;
	int j;
	int max;

	i = 0;
	j = 0;
	max = 0;
	while (j < max_lin)
	{
		while (i < max_col - 1)
		{
			if (tab[j][i] > tab[j][i+1])
			{
				max = tab[j][i];
			}
		i++;
		}
		i = 0;
		j++;
	}
	return (max);
}


t_point		ft_case_max2(int **tab, int max_col, int max_lin)
{
	int i;
	int j;
	int max;

	i = 0;
	j = 0;
	while (j < max_lin)
	{
		while (i < max_col)
		{
		if (tab[j][i] == max)
		{
			return // la case en question
		}
		i++;
		}
	j++;
	i = 0;
	}

	return (-1);
}

