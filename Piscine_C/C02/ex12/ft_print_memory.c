#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	write(1, str, i);
}

static void	print_hex(unsigned char hex)
{
	char	*tab;

	tab = "0123456789abcdef";
	ft_putchar(tab[hex / 16]);
	ft_putchar(tab[hex % 16]);
}

static void	print_char(unsigned char hex)
{
	if (hex > 31 && hex < 127)
		ft_putchar(hex);
	else
		ft_putchar('.');
}

static void	make_hexs(unsigned char *line, unsigned int curline, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i && i % 2 == 0)
			ft_putchar(' ');
		if (curline * 16 + i < size)
			print_hex(line[i]);
		else
			ft_putstr(" ");
		i++;
	}
}
void		*ft_print_memory(const void *addr, unsigned int size)
{
	unsigned int	curline;
	unsigned char	*tmp;
	unsigned int	i;

	curline = 0;
	tmp = (unsigned char*)addr;
	while (curline * 16 < size)
	{
		make_hexs(tmp, curline, size);
		ft_putchar(' ');
		i = 0;
		while (i < 16)
		{
			if (curline * 16 + i < size)
				print_char(tmp[i]);
			i++;
		}
		ft_putchar('\n');
		tmp += 16;
		curline++;
	}
	return(addr);
}
