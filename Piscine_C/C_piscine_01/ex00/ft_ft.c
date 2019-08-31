#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int a;
	int *ptr;

	a=2;
	ptr=&a;
	ft_ft(ptr);
	printf("%d", *ptr);
}
