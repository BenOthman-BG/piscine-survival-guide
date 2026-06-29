#include <unistd.h>

void ft_is_nigative(int n )
{
	char c ;
	if (n >= 0)
	{
		c = 'P';
		write (1 ,&c ,1);
	}
	else 
	{
		c = 'N' ;
		write(1 ,&c ,1);
	}
}

int main(){
	ft_is_nigative(0);
}

