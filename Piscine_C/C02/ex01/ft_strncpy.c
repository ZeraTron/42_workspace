/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 19:58:33 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/02 12:23:22 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = -1;
	while (++i < n && src[i] != '\0')
	{
		dest[i] = src[i];
	}
	while (++i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
