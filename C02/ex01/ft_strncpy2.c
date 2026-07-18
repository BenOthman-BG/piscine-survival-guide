#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int 	i;
	unsigned int		j;
	
	i = 0;
	while (src[i] != '\0')
		i++;
	j = 0;
	while (j < i && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

int main ()
{
	char *c = "othman";
	char dest[10];
	char *p;

	p = ft_strncpy(dest, c, 1);
	int i = 0;
	while (i < 10)
	{
		write(1, &p[i], 1);
		i++;
	}
}
