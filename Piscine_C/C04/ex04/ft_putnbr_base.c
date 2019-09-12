/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:09:55 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/09 17:20:36 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if ((nbr / 10) > 0)
		ft_putnbr_base(nbr / 10, base);
	ft_putchar(nbr % 10 + 48);
}

int main(void)
{
	ft_putnbr_base(-51, 95);
}

// void	ft_putnbr(int nb)
// {
// 	unsigned int	nbr;

// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		nbr = nb * -1;
// 	}
// 	else
// 		nbr = nb;
// 	if (nbr >= 10)
// 		ft_putnbr(nbr / 10);
// 	ft_putchar(nbr % 10 + 48);
// }
