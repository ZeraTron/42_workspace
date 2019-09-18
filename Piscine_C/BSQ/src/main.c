/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:31:51 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/18 06:00:47 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/bsq.h"

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	write(1, &str, i);
}

int main(int argc, char **argv)
{
	char *str;
	if (argc != 2)
		return (0);
	str = open_file(argv[1]);
	ft_putstr(str);
	free(str);
	return (0);
}