#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i--;
	}
	return (1);
}

int main ()
{
	char *c = "1";

	printf("%d", ft_str_is_alpha(c));
}
