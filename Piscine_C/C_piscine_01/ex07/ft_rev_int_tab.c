#include <unistd.h>
#include <stdio.h>

// 1. all values from *tab -> holder[size]
// 2. transfer values from holder[size] from the end to *tab

void	ft_rev_int_tab(int *tab, int size)
{
	int holder[size];
	int i;

	i=0;
	while (tab[i])
	{
		holder[i] = tab[i];
		i++;
	}
	i=0;
	while (holder[i])
	{
		tab[i] = holder[size];
		size--;
	}
}

int main(void)
{
	int table[] = ("1", "2", "3", "4", "5", "6");
	printf("%d %d %d", table[1], table[2], table[3]);
}
