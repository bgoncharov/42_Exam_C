#include <stdlib.h>
#include <stdio.h> //DELETE

char	*ft_itoa_base(int value, int base)
{
	long nbr;
	int len;
	char *str;
	char b[17] = "0123456789ABCDEF";

	len = 0;
	if (value == 0)
		return ("0");
	nbr = value;
	while (value)
	{
		value = value / base;
		len++;
	}
	if (nbr < 0 && base == 10)
	{
		len++;
		str = (char *)malloc(sizeof(char) * len + 1);
		str[0] = '-';
		nbr = -nbr;
	}
	else if (nbr < 0)
	{
		str = (char *)malloc(sizeof(char) * len + 1);
		nbr = -nbr;
	}
	else 
		str = (char *)malloc(sizeof(char) * len + 1);
	str[len] = '\0';
	len--;
	while (nbr)
	{
		str[len] = b[nbr % base];
		nbr = nbr / base;
		len--;
	}
	return (str);
}

int		main(void) //DELETE
{
	printf("%s\n", ft_itoa_base(-102488797, 2));
	return (0);
}