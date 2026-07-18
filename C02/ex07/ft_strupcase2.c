
#include <unistd.h>

char	*ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i--;
	}
	return (str);
}

int main ()
{
	char c[100] = "othman10BENYAHYA";
	char *src;

	src = ft_str_is_alpha(c);
	while (*src != '\0')
	{
	write (1, src, 1);
	src++;
	}
}
