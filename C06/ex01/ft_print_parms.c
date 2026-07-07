#include <unistd.h>

int	main(int argc, char *argv[], char **envp)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}

	j = 1;
	while (*envp != NULL)
	{
		i = 0;
		while (envp[j][i] != '\0')
		{
			write(1, &envp[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}

	return (0);
}
