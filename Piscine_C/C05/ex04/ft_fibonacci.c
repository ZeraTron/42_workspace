/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:54:36 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/14 14:00:20 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 2)
		return (index);
	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

int main(void)
{
	printf("%d\n", ft_fibonacci(12));
}