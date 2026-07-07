#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
int	ft_tail_recursive_power(int nb, int power, int acumulator)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (acumulator);
	return (ft_tail_recursive_power(nb, power - 1, nb * acumulator));
}
int main()
{
	int resultat;

	//resultat = ft_recursive_power(10, 1);
	resultat = ft_tail_recursive_power(3, 3, 1);
	printf("the power is : %d ",resultat);
	return (0);
}
