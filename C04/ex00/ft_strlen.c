int	ft_strlen(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		str++;
	}
	return (str - start);
}
