char	*ft_strstr(char *src, char *to_find)
{
	int	i;

	if (*to_find == '\0')
		return (src);
	while (*src != '\0')
	{
		i = 0;
		while(src[i] == to_find[i] && to_find[i] != '\0')
		{ 
			i++;
		}
		if (to_find[i] == '\0')
			return (src);
		src++;
	}
	return (0);
}
