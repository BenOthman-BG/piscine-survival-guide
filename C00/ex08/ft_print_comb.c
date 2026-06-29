#include <unistd.h>

int	find_categorie(int n)
{
	int	categorie;

	categorie = 1;
	while (n >= 10)
	{
		n = n / 10;
		categorie = categorie * 10;
	}
	return (categorie);
}

int	power(int x, int n)
{
	int	pow;
	int	i;

	pow = 1;
	i = 0;
	while (i < n)
	{
		pow = pow * x;
		i++;
	}
	return (pow);
}

int	is_true(int nbr, int categorie)
{
	int	a;
	int	b;
	int	counter;

	counter = 1;
	while (categorie >= 10)
	{
		a = nbr / categorie;
		nbr = nbr % categorie;
		categorie = categorie / 10;
		b = nbr / categorie;
		if (a < b)
			counter = counter * 10;
		else
			return (0); // ⚡ الخروج المبكر: إذا لم تكن الأرقام متصاعدة، أوقف الفحص فوراً!
	}
	return (counter);
}

void	ft_print_numbers(int nbr, int categorie, int state, int n)
{
	char	c;
	int		counter;
	int		final;

	counter = is_true(nbr, categorie);
	if (counter == categorie) // إذا رجعت 0 من التعديل السابق، فهذا الشرط سيفشل وهو المطلوب
	{
		final = nbr / categorie;
		c = '0';
		if (state == 1)
			write(1, &c, 1);
		while (categorie >= 10)
		{
			c = '0' + (nbr / categorie);
			nbr = nbr % categorie;
			categorie = categorie / 10;
			write(1, &c, 1);
		}
		c = '0' + (nbr / categorie);
		write(1, &c, 1);
		if (final != 10 - n)
			write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int	counter;
	int	categorie;
	int	limit1; // لتخزين قوة 10 قبل الحلقة
	int	limit2; // لتخزين قوة 10 قبل الحلقة
	int	max_val; // لتخزين الحد الأقصى قبل الحلقة

	counter = 0;
	// ⚡ الحساب المسبق: نحسب الأسس مرة واحدة فقط بدلاً من ملايين المرات
	limit1 = power(10, n - 2);
	limit2 = power(10, n - 1);
	max_val = power(10, n) - 1;

	while (counter <= max_val && counter <= 123456789)
	{
		categorie = find_categorie(counter);
		if (n == 1 && counter < 1)
			write(1, "0, ", 3); // ⚡ تخلصنا من المتغير c لنلتزم بقانون الـ 5 متغيرات للنيرم
		if (counter >= limit1 && counter < limit2)
			ft_print_numbers(counter, categorie, 1, 0);
		if (counter >= limit2)
			ft_print_numbers(counter, categorie, 0, n);
		counter++;
	}
}
 int    main(void)

{

    ft_print_combn(7);

    return (0);

} 
