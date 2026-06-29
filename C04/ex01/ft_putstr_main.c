#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int main()
{
	char *str = "ojoiwjfowi98\n9843&%$#@";

	ft_putstr(str);
}
