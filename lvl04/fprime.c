#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
	int i;
	int nbr;

	if (ac == 2)
	{
		i = 1;
		nbr = atoi(av[1]);
		if (nbr == 1)
			printf("1");
		while (nbr >= ++i)
		{
			if (nbr % i == 0)
			{
				printf("%d", i);
				if (nbr == i)
					break ;
				printf("*");
				nbr /= i;
				i = 1;
			}
		}
	}
	printf("\n");
	return (0);
}