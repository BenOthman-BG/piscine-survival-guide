#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb-1));
}

int ft_tail_recursive_factorial(int nb, int acumulator)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return acumulator;
	return ft_tail_recursive_factorial(nb - 1, nb * acumulator);
}


int main()
{
	int fact ;

	//fact = ft_recursive_factorial (9);
	fact = ft_tail_recursive_factorial(-3, 1);
	printf("fact = %d ",fact);

	return (0);
}
