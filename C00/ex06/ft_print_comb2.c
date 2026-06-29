#include <unistd.h>

void	ft_print_comb_help1(int a, int b)
{
	char	c;

	c = '0' + (a / 10);
	write(1, &c, 1);
	c = '0' + (a % 10);
	write(1, &c, 1);
	write(1, " ", 1);
	c = '0' + (b / 10);
	write(1, &c, 1);
	c = '0' + (b % 10);
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_comb_help1(a, b);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
