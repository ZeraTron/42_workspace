#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char init[]="Hello";
	char blah[]="World";
	printf("%s %s", init, blah);
	ft_strcpy(init, blah);
	printf("%s %s", init, blah);
}
