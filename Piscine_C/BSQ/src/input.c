/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:33:14 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/18 18:02:47 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/bsq.h"

char	*open_file(char *file)
{
	int		fd;
	int		count;
	char	buf;
	char	*full;

	fd = open(file, O_RDONLY);
	if (fd > 0)
	{
		count = 0;
		while (read(fd, &buf, 1) == 1)
			count++;
		full = (char*)malloc(sizeof(char*) * (count + 1));
		count = 0;
		close(fd);
		fd = open(file, O_RDONLY);
		if (fd < 0)
			return (0);
		while (read(fd, &buf, 1) == 1)
			full[count++] = buf;
		full[count] = '\0';
		close(fd);
		return (full);
	}
	return (0);
}

void	get_charset(char *str, t_grid *map)
{
	int		i;
	char	*charset;

	i = 0;
	while (str[i] != '\n')
		i++;
	charset = (char*)malloc(sizeof(char*) * (i + 1));
	i = 0;
	while (str[i] != '\n')
	{
		charset[i] = str[i];
		i++;
	}
	i = 0;
	while (charset[i] >= '0' && charset[i] <= '9')
	{
		map->y = (10 * map->y) + charset[i] - '0';
		i++;
	}
	map->char_empty = charset[i];
	map->char_obstacle = charset[i + 1];
	map->char_square = charset[i + 2];
}

int		get_current_char(char c, t_grid *map)
{
	if (c == map->char_empty)
		return (1);
	else if (c == map->char_obstacle)
		return (0);
	else
		return (-1);
}
