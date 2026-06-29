#include <stdio.h>

int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

int main ()
{
	char *str = "";
	int a ;

	a = ft_strlen(str);
	printf("lenth is : %d ",a);

	return (0);
}
