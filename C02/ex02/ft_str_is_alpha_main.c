#include <stdio.h> 

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
			return (0);
		str++;
	}
	return (1);
}

int main () 
{
	int status;
	char *str = "ijf9";

		status = ft_str_is_alpha(str);
	printf("the value is : %d \n" ,status);
	return 0;
}

