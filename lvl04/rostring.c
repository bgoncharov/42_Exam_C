#include <unistd.h>

int main(int ac, char *av[])
{
	if (ac > 1)
	{
		int i;
		int k;

		i = 0;
		while(av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		k = i;
		while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
			i++;
		while (av[1][i])
		{
			if (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t')
					&& (av[1][i - 1] == ' ' || av[1][i - 1] == '\t'))
			{
				while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
					write(1, &av[1][i++], 1);
				write(1, " ", 1);
			}
			i++;
		}
		while (av[1][k] && (av[1][k] != ' ' && av[1][k] != '\t'))
			write(1, &av[1][k++], 1);
	}
	write(1, "\n", 1);
	return (0);
}