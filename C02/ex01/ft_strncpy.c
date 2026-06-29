char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*head;
	unsigned int	counter;

	counter = 0;
	head = dest;
	while (counter < n)
	{
		if (*src != '\0')
		{
			*dest++ = *src++;
			counter++;
		}
		else
		{
			*dest++ = '\0';
			counter++;
		}
	}
	return (head);
}
