#include <unistd.h>

char	*ft_strstr(char *src, char *to_find)
{
	char	*h1;
	char	*h2;

	h1 = to_find;
	if (*to_find == '\0')
		return (src);
	while (*src != '\0')
	{
		if ( *src == *to_find )
		{
			h2 = src;
			while(*src == *to_find && *to_find != '\0')
			{
				src++;
				to_find++;
			}
			if (*to_find == '\0')
				return (h2);
			to_find = h1;
			src = h2;
		}
		src++;
	}
	return (NULL);
}

int main()
{
	char *src = "1133811337uw";
	char *to_find = "1337";
	char *p ;

	p = ft_strstr(src, to_find);
	while (*p != '\0')
	{
		write(1, p, 1);
		p++;
	}
	return (0);
}
