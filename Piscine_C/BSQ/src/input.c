/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:16:21 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/16 13:18:42 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_uns	read_map(char *map)
{
	int		fd;

	fd = open(map, O_RDONLY);
	if (fd < 0)
		return (1);
	if (prepare_read(&fd) == 1)
		return (1);
	return (0);
}

t_uns	read_stdin(void)
{
	int		fd;

	fd = 0;
	if (prepare_read(&fd))
		return (1);
	return (0);
}
