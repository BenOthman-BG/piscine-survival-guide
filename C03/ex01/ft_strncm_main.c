#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0 )
		return (0);
	while (*s1 == *s2 && *s1 != '\0' && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int main ()
{
	char	*s1 = "oth";
	char	*s2= "oth";
	unsigned int		a;

	a = ft_strncmp(s1,s2,9);
	printf("la valeur est : %d " ,a);
	return (0);
}
