#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *str)
{
	int	counter;
	char	*ptr;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	ptr = malloc(counter + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[counter] = '\0';
	counter--;
	while (counter >= 0)
	{
		ptr[counter] = str[counter];
		counter--;
	}
	return (ptr);
}

int	main()
{
	char *str = "Othman Benyahya";
	char *ptr;
	int counter = 0;

	ptr = ft_strdup(str);
	while (ptr[counter] != '\0')
	{
		write (1, &ptr[counter], 1);
		counter++;
	}
	free(ptr);
	return (0);
}
