#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int fib_tail(int n, int a, int b) {
    if (n == 0) return a;
    if (n == 1) return b;
    return fib_tail(n - 1, b, a + b); 
}
int main()
{
	int fibo;

	fibo = ft_fibonacci(30);
	printf("fibo : %d ",fibo);
	return (0);
}
