#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	nbr;
	int	*ptr;

	if (min >= max)
		return (NULL);
	nbr = max - min;
	ptr = malloc(nbr * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	nbr--;
	max--;
	while (nbr >= 0)
	{
		ptr[nbr] = max;
		nbr--;
		max--;
	}
	return (ptr);
}	

int	main()
{
	int *ptr;
	int counter;
	int counter2 = 0;

	ptr = ft_range(-2, 5);
	counter = 5 - (-2);
	while (counter2 < counter)
	{
		printf("%d " ,ptr[counter2]);
		counter2++;
	}

	return (0);
}
