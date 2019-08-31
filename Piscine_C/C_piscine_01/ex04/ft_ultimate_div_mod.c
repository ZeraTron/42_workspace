#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;

	if (*b != 0)
	{
		tmp = *a;
		*a = *a / *b;
		*b = *a % *b;
	}
}

int	main(void)
{
	int	div_;
	int	mod_;
	int *alpha;
	int *beta;

	div_=24;
	mod_=2;
	alpha=&div_;
	beta=&mod_;
	printf("div_: %d | mod_: %d | *alpha: %d | *beta: %d \n", div_, mod_, *alpha, *beta);
	ft_ultimate_div_mod(alpha, beta);
	printf("div_: %d | mod_: %d | *alpha: %d | *beta: %d \n", div_, mod_, *alpha, *beta);
}
