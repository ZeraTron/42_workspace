/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 12:50:48 by pbouet            #+#    #+#             */
/*   Updated: 2019/09/08 13:45:57 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_valid(char *c, int pos)
{
	int		cond1;
	int		cond2;

	cond1 = (((*c >= '1') && *c <= '4') && (pos % 2 == 0));
	cond2 = ((*c == ' ') && (pos % 2 == 1));
	return (cond1 || cond2);
}

int	ft_check_input(char *str)
{
	int		cpt;
	char	c;

	cpt = 0;
	while ((str) && cpt < 31)
	{
		c = str[cpt];
		if (!(ft_char_valid(&c, cpt)))
			return (0);
		cpt++;
	}
	if (str[cpt])
	{
		return (0);
	}
	return (1);
}
