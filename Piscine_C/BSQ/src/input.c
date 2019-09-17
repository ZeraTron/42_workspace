/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:33:14 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/17 21:12:51 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/bsq.h"

int read_map(char *map)
{
	int	fd;
	int len;
	char *buf;

	buf = NULL;
	fd = open(map, O_RDONLY);
	if (fd < 0)
		return (1);
	len = read(fd, buf, BUF_SIZE);
	write(1, &buf, len);
	write(1, "ok", 2);
	return (0);
}