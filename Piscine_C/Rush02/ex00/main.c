/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:17:30 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/15 17:01:26 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_refs.h"

char	**cuts_to_tab(char *str, int nb_cuts, int lenght)
{
	int i;
	int j;
	int k;
	char **cuts;

	if (!(cuts = (char **)malloc(sizeof(char *) * nb_cuts + 1)))
		return (0);
	i = lenght - 1;
	k = 0;
	while (k <= nb_cuts - 1)
	{
		if (!(cuts[k] = (char *)malloc(sizeof(char) * 4)))
			return (0);
		j = 0;
		while (j < 3 && i >= 0)
		{
			cuts[k][j] = str[i];
			i--;
			j++;
		}
		cuts[k][j] = 0;
		k++;
	}
	cuts[k] = 0;
	return (cuts);
}

int		cuts_nbr(char *str, int *lenght)
{
	int size;
	int count;
	int modulo;

	size = 0;
	count = 0;
	while (str[size])
		size++;
	*lenght = size;
	modulo = size % 3;
	size /= 3;
	if (modulo == 1 || modulo == 2)
		size += 1;
	return (size);
}

char		*reverse(char *str)
{
	int start;
	int end;
	int lenght;
	char *tmp;

	start = 0;
	lenght = 0;
	while (str[lenght])
		lenght++;
	end = lenght - 1;
	tmp = (char *)malloc(sizeof(char) * lenght);
	while (start < lenght)
	{
		tmp[start] = str[end];
		start++;
		end--;
	}
	tmp[start] = 0;
	return (tmp);
}

int	translate(char *nb, t_dict *dict, int fullSize)
{
 	int 	i;
	int nbr_len;

 	i = 0;
	nbr_len = get_cut_size(nb);
	while (i < get_cut_size(nb))
	{
		while (nb[i] == '0')
		{
			nbr_len--;
			i++;
		}
		while (dict->keySize != nbr_len)
			dict = dict->next;
		while (*dict->key != nb[i])
			dict = dict->next;
		display(dict);
		if (nb[2])
		{
			while (dict->keySize != fullSize)
				dict = dict->next;
			display(dict);
			fullSize -= 3;
		}
		nbr_len--;
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int lenght;
	int cuts;
	int i;

	if (argc > 3)
		return (0);
	begin = &elem0;
	genDict();
	lenght = 0;
	cuts = cuts_nbr(argv[1], &lenght);
	i = cuts - 1;
	char **res;
	res = cuts_to_tab(argv[1], cuts, lenght);
	printf("lenght = %d\n", lenght);
	while (i >= 0)
	{
		res[i] = reverse(res[i]);
		//printf("The rank is ----- %d and the string correlated --- %s\n", i, res[i]);
		translate(res[i], begin, lenght);
		i--;
	}
	return (0);
}
