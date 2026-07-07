#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb == 1)
		return (1);
	while (i <= nb / i)
	{
		if (nb % i == 0 && nb / i == i)
			return (i);
		i++;
	}
	return (0);
}

int main ()
{
	int sqrt;

	sqrt = ft_sqrt(-4);
	printf("sqrt = %d ",sqrt);

	return (0);
}
