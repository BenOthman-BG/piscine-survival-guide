#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ( *s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

int main ()
{
	char	*s1 = "othma";
	char	*s2= "othWn";
	int		a;

	a = ft_strcmp(s1,s2);
	printf("la valeur est : %d " ,a);
	return (0);
}
