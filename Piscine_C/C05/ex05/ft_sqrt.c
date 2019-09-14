/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:01:14 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/14 14:17:00 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int root;
	int sqrt;
	root = 1;
	sqrt = 0;
	while (root <= nb / 2)
	{
		sqrt = root * root;
		if (sqrt == nb)
			return (root);
		root = root + 1;
	}
	return (0);
}


int main(void)
{
	printf("%d\n", ft_sqrt(5));
}