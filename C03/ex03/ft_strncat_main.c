#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*head;

	head = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && nb > 0 )
	{
		*dest++ = *src++;
		nb--;
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

	p = ft_strncat(dest, src,10);

	while (*p != '\0')
{
write (1, p, 1);
p++;
	}
return (0);
}
