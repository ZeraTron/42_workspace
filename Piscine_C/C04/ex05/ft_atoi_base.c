/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 09:41:27 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/17 16:14:44 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10)) || \
	(c >= 'a' && c <= ('a' + base - 10)));
}

int		ft_atoi_base(const char *str, char *base)
{
	int		i;
	int		nbr;
	int		sign;

	if (!str[0] || (base < 2 || base > 16))
		return (0);
	nbr = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || \
		str[i] == ' ' || str[i] == '\r' || str[i] == '\f')
		i += 1;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] && check_base(str[i], base))
	{
		if (str[i] >= 'A' && 'F' >= str[i])
			nbr = (nbr * base) + (str[i] - 'A' + 10);
		else if (str[i] >= 'a' && 'f' >= str[i])
			nbr = (nbr * base) + (str[i] - 'a' + 10);
		else
			nbr = (nbr * base) + (str[i] - '0');
		i += 1;
	}
	return (nbr * sign);
}

int		main(void)
{
	printf("==== 21 ft_atoi_base ====\n");
	printf("Tesing ex21\n");
	printf("Should return 0 in case of invalid arguments\n");
	printf("%d\n", ft_atoi_base("15", ""));
	printf("%d\n", ft_atoi_base("15", "1"));
	printf("%d\n", ft_atoi_base("15", "144"));
	printf("%d\n", ft_atoi_base("15", "14+35"));
	printf("%d\n", ft_atoi_base("15", "145-09"));
	printf("%d\n", ft_atoi_base("", "14509"));
	printf("%d\n", ft_atoi_base("x15", "14509"));
	printf("Should print number in correct radix\n");
	printf("%d\n", ft_atoi_base("+1111", "01"));
	printf("%d\n", ft_atoi_base("+15", "0123456789"));
	printf("%d\n", ft_atoi_base("+F", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("+vi", "fivte3n"));
	printf("%d\n", ft_atoi_base("+84", "9876543210"));
	printf("Should handle negative numbers\n");
	printf("%d\n", ft_atoi_base("-1111", "01"));
	printf("%d\n", ft_atoi_base("-15", "0123456789"));
	printf("%d\n", ft_atoi_base("-F", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("-vi", "fivte3n"));
	printf("%d\n", ft_atoi_base("-84", "9876543210"));
	printf("All tests passed for ex21\n");
	return (0);
}
