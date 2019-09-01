#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	static int	div_;
	static int	mod_;
	int *alpha;
	int *beta;

	alpha=&div_;
	beta=&mod_;
	printf("div_: %d | mod_: %d | *alpha: %d | *beta: %d \n", div_, mod_, *alpha, *beta);
	ft_div_mod(30, 5, alpha, beta);
	printf("div_: %d | mod_: %d | *alpha: %d | *beta: %d \n", div_, mod_, *alpha, *beta);
}
