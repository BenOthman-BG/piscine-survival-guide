#include <stdio.h> 

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
			return (0);
		str++;
	}
	return (1);
}

int main () 
{
	int status;
	char *str = "kikwi22323\n";

		status = ft_str_is_printable(str);
	printf("the value is : %d \n" ,status);
	return 0;
}
