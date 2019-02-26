#include <unistd.h>

int ft_atoi(char *s)
{
	long res;
	int sign;

	sign = 1;
	res = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t' ||
		*s == '\f' || *s == '\r' || *s == '\v')
		s++;
	if (*s == '-' || *s == '+')
		if (*s++ == '-')
			sign = -1;
	while (*s >= '0' && *s <= '9')
		res = (res * 10) + (*s++ - '0');
	return ((int)res * sign);
}

void print_hex(int n)
{
	if (n >= 16)
		print_hex(n / 16);
	n = n % 16;
	n += n < 10 ? '0' : 'a' - 10;
	write (1, &n, 1);
}

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		print_hex(ft_atoi(av[1]));
	}
	write (1, "\n", 1);
	return (0);
}