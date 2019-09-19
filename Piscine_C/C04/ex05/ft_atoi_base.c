/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 09:41:27 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/19 09:56:55 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checkbase(char *base)
{
	int	i;
	int len;

	len = 0;
	while (base[len])
	{
		i = len + 1;
		if (base[len] == '-' || base[len] == '+' || base[len] <= 32 ||
			base[len] == 127)
			return (0);
		while (base[i])
			if (base[i++] == base[len])
				return (0);
		len++;
	}
	return (len);
}

int		ft_pow(int n, int p)
{
	int i;
	int res;

	i = 0;
	res = 1;
	while (i < p)
	{
		res = res * n;
		i++;
	}
	return (res);
}

int		inbase(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i] != c && base[i])
		i++;
	if (base[i] == '\0')
		return (-1);
	return (i);
}

int		getstart_n_sign(char *str)
{
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	return (i * sign);
}

int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int	n;
	int	l;
	int	r;
	int	s;

	i = getstart_n_sign(str);
	s = (i >= 0 ? 1 : -1);
	i = i * s;
	s = i * s;
	l = 0;
	while (inbase(str[l + i], base) >= 0)
		l++;
	r = 0;
	n = checkbase(base);
	if (n < 2)
		return (0);
	while (inbase(str[i], base) >= 0)
	{
		r += inbase(str[i], base) * ft_pow(n, l - (i - (s >= 0 ? s : -s)) - 1);
		i++;
	}
	return (r * (s >= 0 ? 1 : -1));
}
