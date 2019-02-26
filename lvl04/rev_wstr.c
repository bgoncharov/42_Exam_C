#include <unistd.h>

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int is_blank(char c)
{
	return (c == ' ' || c == '\t');
}

int rev_wstr(char *str, int len)
{
	int i;

	i = 0;
	while (len > 0 && is_blank(str[len]))
		len--;
	while (i <= len && !is_blank(str[len - i]))
		i++;
	write(1, str + len - i + 1, i);
	while (len > 0 && is_blank(str[len]))
		len--;
	if (i < len)
		write(1, " ", 1);
	return (len - i);
}

int main(int ac, char *av[])
{
	int len;

	if (ac == 2)
	{
		len = ft_strlen(av[1]) - 1;
		while (len > 0)
			len = rev_wstr(av[1], len);
	}
	write(1, "\n", 1);
	return (0);
}