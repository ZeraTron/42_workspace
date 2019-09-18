/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:33:14 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/18 05:47:57 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/bsq.h"

char	*open_file(char *file)
{
	int fd;
	int count;
	char buf;
	char *full;

	fd = open(file, O_RDONLY);
	if (fd > 0)
	{
		count = 0;
		while (read(fd, &buf, 1) == 1)
			count++;
		full = malloc(sizeof(char*) * (count + 1));
		count = 0;
		while (read(fd, &buf, 1) == 1)
			full[count++] = buf;
		full[count] = '\0';
		close(fd);
		return (full);
	}
	return (0);
}
