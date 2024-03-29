/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_store_rules.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:05:05 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/08 14:59:34 by pbouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_store_rules(char *str, int *c_ud, int *r_lr)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		if (i / 8 == 0)
			c_ud[(i / 2)] = str[i] - '0';
		if (i / 8 == 1)
			c_ud[(i / 2)] = str[i] - '0';
		if (i / 8 == 2)
			r_lr[(i / 2 - 8)] = str[i] - '0';
		if (i / 8 == 3)
			r_lr[(i / 2 - 8)] = str[i] - '0';
		i++;
	}
}
