#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	resultat;

	i = 1;
	resultat = 1;
	if (power < 0)
		return (0);
	while (i <= power)
	{
		resultat = resultat * nb;
		i++;
	}
	return (resultat);
}

int main()
{
	int resultat;

	resultat = ft_iterative_power(0,0);
	printf("power is : %d ",resultat);
	return (0);
}
