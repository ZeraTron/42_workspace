/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 23:44:42 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/08 14:17:06 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && i < n)
	{
		i++;
		if (s1[i] == '\0')
			return (s1[i] - s2[i]);
	}
	if (s1[i] == '\0')
		return (s1[i] - s2[i]);
	else
		return (s1[n - 1] - s2[n - 1]);
}
