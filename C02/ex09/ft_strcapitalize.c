#include <unistd.h>

char	*ft_str_is_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) && j == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			j = 1;

		}
		else if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) && j == 1)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		else {
			j = 0;
		}
		i++;
	}
	return (str);
}

int main ()
{
	char c[100] = "othman10BENYAHYA_ojof_hello hi ,Iam good ,and you";
	char *src;

	src = ft_str_is_alpha(c);
	while (*src != '\0')
	{
		write (1, src, 1);
		src++;
	}
}
