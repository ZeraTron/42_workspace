/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkany <bkany@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:31:51 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/18 20:54:40 by bkany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/bsq.h"

int main(int argc, char **argv)
{
	t_grid the_map;
	int **bin_map;
	char **char_map;
	char *str;
	
	if (argc != 2)
		return (0);
	str = open_file(argv[1]);
	the_map = init_map_struct(str);
	bin_map = build_binary_map(str, &the_map);
	bin_display(bin_map, &the_map);
	ft_init_square(bin_map, &the_map);
	ft_fill_square(bin_map, &the_map);
	bin_display(bin_map, &the_map);
	char_map = rebuild_char_map(bin_map, &the_map);
	printf("%s\n", char_map[0]);

	free(bin_map);
	free(str);
	return (0);
}