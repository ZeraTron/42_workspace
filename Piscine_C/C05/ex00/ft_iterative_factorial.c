#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int i;
	unsigned int nbr;

	if (nb < 0)
		return (0);
	i = 1;
	nbr = nb;
	while (i < nb)
	{
		nbr = nbr * i;
		i++;
	}
	return (nbr);
}

int main(void)
{
	int dee = ft_iterative_factorial(5);
	printf("%d\n", dee);
}
