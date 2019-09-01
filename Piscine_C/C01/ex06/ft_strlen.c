#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;
	char strlen;

	i=0;
	strlen='0';
	while (str[i])
	{
		write(1, &i, 1);
		i++;
		strlen++;
	}
	return strlen;
}
