#include <unistd.h>

int	find_categorie(int nbr)
{
	int	categorie;

	categorie = 1;
	while (nbr >= 10 || nbr <= -10)
	{
		nbr = nbr / 10;
		categorie = categorie * 10;
	}
	return (categorie);
}

void	ft_putnbr(int nb)
{
	char	c;
	char	minus;
	int		categorie;

	minus = '-';
	categorie = find_categorie(nb);
	if (nb < 0)
		write(1, &minus, 1);
	while (categorie >= 10)
	{
		if (nb < 0)
			c = '0' + ((nb / categorie) * (-1));
		if (nb >= 0)
			c = '0' + (nb / categorie);
		write(1, &c, 1);
		nb = nb % categorie;
		categorie = categorie / 10;
	}
	if (nb < 0)
		c = '0' + ((nb / categorie) * (-1));
	if (nb >= 0)
		c = '0' + (nb / categorie);
	write(1, &c, 1);
}

int	main(void)
{
	ft_putnbr(-402);
	return (0);
}
