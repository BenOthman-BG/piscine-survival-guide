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
