char	*ft_strupcase(char *str)
{
	char	*head;

	head = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (head);
}
