/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 11:45:44 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/18 11:45:45 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i] != '\0')
		++i;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		++j;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_len(char **str, int size, char *sep)
{
	int total_size;
	int size_sep;
	int i;

	i = 0;
	total_size = 0;
	size_sep = ft_strlen(sep);
	while (i < size)
	{
		total_size = total_size + ft_strlen(str[i++]);
		if (i < size)
			total_size = total_size + size_sep;
	}
	return (total_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	char	*out;
	int		i;

	i = 0;
	total_size = ft_len(strs, size, sep);
	if (!(out = malloc(total_size + 1)))
		return (0);
	out[0] = '\0';
	while (i < size)
	{
		ft_strcat(out, strs[i++]);
		if (i < size)
			ft_strcat(out, sep);
	}
	return (out);
}
