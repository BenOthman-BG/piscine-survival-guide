void	ft_rev_int_tab(int *tab, int size)
{
	int	*a;
	int	*b;
	int	tmp;
	int	counter1;
	int	counter2;

	counter1 = 0;
	counter2 = size -1;
	while (counter1 < counter2)
	{
		a = tab + counter1;
		b = tab + counter2;
		tmp = *a;
		*a = *b;
		*b = tmp;
		counter1++;
		counter2--;
	}
}
