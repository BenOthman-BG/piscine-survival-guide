unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	counter1;

	dest_size = 0;
	src_size = 0;
	counter1 = 0;
	while (dest[dest_size] != '\0' && dest_size < size)
		dest_size++;
	while (src[src_size] != '\0')
		src_size++;
	if (dest_size == size)
		return (size + src_size);
	dest = dest + dest_size;
	while (counter1 < size - dest_size - 1 && *src != '\0')
	{
		*dest++ = *src++;
		counter1++;
	}
	*dest = '\0';
	return (dest_size + src_size);
}
