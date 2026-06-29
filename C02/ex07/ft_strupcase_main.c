#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*head;

	head = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (head);
}

int main ()
{
	char str[10] = "othmPn123\n";
	char *pointer;

	pointer = ft_strupcase(str);
	while(*pointer != '\0')
	{
		write(1 ,pointer ,1);
		pointer++;
	}
	return (0);
}
