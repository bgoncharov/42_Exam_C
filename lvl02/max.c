#include <stdio.h> // DELETE

int		max(int *tab, unsigned int len)
{
	int	max;

	if (!len)
		return (0);
	max = tab[--len];
	while (len--)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}

int main() // DELETE
{
	int ch[5] = {1,2,34,23,6};
	int x = max(ch, 4);
	printf("%d\n", x);
	return (0);
}