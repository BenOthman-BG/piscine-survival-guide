#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*head;
	unsigned int	counter;

	counter = 0;
	head = dest;
	while (counter < n)
	{
		if (*src != '\0')
		{
			*dest++ = *src++;
			counter++;
		}
		else 
	{
			*dest++ = '\0';
			counter++;
		}
	}
	return (head);
}

int main ()
{
	char copy[10];
	char *src = "hello";
	char *dest;
	unsigned int	counter = 0;

	dest = ft_strncpy(copy , src, 7);

	while (counter < 7)
	{
		write(1, dest, 1);
		dest++;
		counter++;
	}
	return (0);
}
