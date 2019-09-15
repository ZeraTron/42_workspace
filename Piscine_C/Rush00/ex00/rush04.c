/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 20:44:52 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/01 00:48:26 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int xlen;
	int ylen;

	xlen=0;
	ylen=0;
	// Vertical counter 
	while (++ylen <= y)
	{	
		// Horizontal counter
		while (++xlen <= x)
		{
			// First and last lines
			while (ylen == 1 || ylen == y)
			{
				// Corners printer
				while (xlen == 1 || xlen == x)
				{
					ft_putchar('o');
					++xlen;
					break;
				}
				// Body printer
				while (xlen < x && xlen >= 1)
				{
					ft_putchar('-');
					++xlen;
					break;
				}
				// Breakline printer
				while (xlen == x+1)
				{
					ft_putchar('\n');
					++ylen;
					break;
				}
			}
			// Other lines
			while (ylen > 1 || ylen < y)
			{
				// Walls printer
				while (xlen == 1 || xlen == x)
				{
					ft_putchar('|');
					break;
				}
				// Body printer
				while (xlen < x && xlen > 1)
				{
					ft_putchar(' ');
					break;
				}
				// Breakline printer
				while (xlen == x)
				{
					ft_putchar('\n');
					break;
				}
			}
		}
	}
}

int main()
{
	rush(10,5);
	return (0);
}
