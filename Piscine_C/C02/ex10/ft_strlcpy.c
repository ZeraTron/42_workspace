/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 19:58:33 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/04 15:15:22 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char *d;
	char *e;
	const char *s = src;

	d = dest;
	e = dest + size;
	while (*s != '\0' && d < e)
		*d++ = *s++;
	if (d < e)
		*d = 0;
	else if (size > 0)
		d[-1] = 0;
	while (*s != '\0')
		s++;
	return (s - src);
}
