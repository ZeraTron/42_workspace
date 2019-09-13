/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:16:38 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/12 19:51:25 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int x;
	char nl;

	if (argc < 2)
		return (0);
	i = argc-1;
	x = 0;
	nl = '\n';
	while (argv[i])
	{
		if (i == 0)
			return (0);
		while (argv[i][x])
			x++;
		write(1, argv[i], x);
		write(1, &nl, 1);
		i--;
	}
	return (0);
}
