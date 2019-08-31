#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c=*a;
	*a=*b;
	*b=c;
}

int	main(void)
{
	int a;
	int b;
	int *alpha;
	int *beta;

	a=20;
	b=42;
	alpha=&a;
	beta=&b;
	printf("a: %d | b: %d ", *alpha, *beta);
	ft_swap(alpha, beta);
	printf("a: %d | b: %d ", *alpha, *beta);
}
