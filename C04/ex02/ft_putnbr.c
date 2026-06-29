#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c[11];
	int		tmp;
	int		counter;

	counter = 10;
	tmp = nb;
	if (nb == 0)
		c[counter] = '0';
	while (nb != 0)
	{
		if (nb < 0)
			c[counter] = '0' + ((nb % 10) * (-1));
		else
			c[counter] = '0' + (nb % 10);
		nb = nb / 10;
		counter--;
	}
	if (tmp < 0)
		c[counter] = '-';
	else if (tmp > 0)
		counter++;
	write(1, &c[counter], 11-counter);
}

int	main(void)
{
	ft_putnbr(109);
	return (0);
}
