#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}

int main ()
{
	int fact;
	
	fact = ft_iterative_factorial(-3);
	printf("fact = %d ",fact);

	return (0);
}
