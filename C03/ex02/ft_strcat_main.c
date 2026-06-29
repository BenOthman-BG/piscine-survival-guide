#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*head;

	head = dest;
	while (*dest != '\0')
		dest++;
	while(*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (head);
}

int main ()
{
	char *src = "Benyahya";
	char dest[50];
	char *p;

	dest[0] = 'o'; dest[1] = 't'; dest[2] = 'h'; 
	dest[3] = 'm'; dest[4] = 'a'; dest[5] = 'n'; 
	dest[6] = '\0'; 

	p = ft_strcat(dest, src);

	while (*p != '\0')
{
write (1, p, 1);
p++;
	}
return (0);
}
