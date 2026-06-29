#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		str++;
	}
	write (1, start, str - start);
}
