#include <stdio.h> 

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int main () 
{
	int status;
	char *str = "kikwi22323";

		status = ft_str_is_alpha(str);
	printf("the value is : %d \n" ,status);
	return 0;
}

