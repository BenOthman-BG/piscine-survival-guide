#include <unistd.h>

char	*ft_rey(char *str)
{
	int i;
	int j;
	char tmp;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	j = 0;
	while (j < i)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		i--;
		j++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int main ()
{
	char c[50] = "a";
	char *str;

	str = ft_rey(c);
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
