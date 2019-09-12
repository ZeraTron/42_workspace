#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	const int i;
	unsigned int nbr;

	i = 0;

	if (nb < 0)
		return (0);
	nbr = nb;
	while (i < nb)
	{
		ft_recursive_factorial(nbr);
	}
	return (nbr);
}

int main(void)
{
	int dee = ft_recursive_factorial(6);
	printf("%d\n", dee);
}
