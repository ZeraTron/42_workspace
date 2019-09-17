/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 23:44:42 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/17 15:58:07 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != 0) && (s2[i] != 0) && (i < n - 1) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int len_to_find;

	i = 0;
	len_to_find = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], to_find, len_to_find) == 0)
			return (str + i);
		else
			i++;
	}
	return (0);
}
