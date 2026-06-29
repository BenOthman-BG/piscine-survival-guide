#include <stdio.h>

int	ft_atoi(char *str)
{
	int	number;
	int	sign;

	sign = 1;
	number = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		number = (number * 10) - (*str - '0');
		str++;
	}
	number = number * sign * (-1);
	return (number);
}

int main () 
{
	char *str = "-2147483648";
	int a;

	a = ft_atoi(str);
	printf("the value is : %d ",a);
return (0);
}
