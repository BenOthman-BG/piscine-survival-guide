#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char *head;

	head = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (head);
}

int main ()
{
	char copy[10];
	char *src = "hello";
	char *dest;

	dest = ft_strcpy(copy , src);

	while (*dest != '\0')
	{
		write(1, dest, 1);
		dest++;
	}
	return (0);
}
