/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remplissage_carre.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 22:13:04 by bkany             #+#    #+#             */
/*   Updated: 2019/09/18 03:21:48 by bkany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**ft_remplissage_carre(char	**tab_char, int max_col, int max_lin)
{
	int i;
	int j;
	int k;
	int **tab_int;

	tab_int = (int*)malloc(max_lin * sizeof(int*));
	k = 0;
	while (k < max_lin)
	{
		tab_int[k] = (int)malloc(max_col * sizeof(int));
		k++;
	}

	while (j < max_lin)
	{
		while (i < max_col)
		{
			if(tab_char[j][i] == 'o')
				tab_int[j][i] = 0;
			i++;
		}
		j++;
	}
	return (tab_int);
}




// A METTRE DANS LA FONCTION DESTROY_MAP
while (k < max_lin)
{
	free(tab_int[k])
	k++;	
}
free(tab_int)
