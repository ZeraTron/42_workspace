/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 23:44:42 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/15 21:26:59 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int size_f;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	size_f = ft_strlen(to_find);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (j == size_f - 1)
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}