char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*head;

	head = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && nb > 0)
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return (head);
}
