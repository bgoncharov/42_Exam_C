#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	len = 0;
	while (str[len])
		len++;
	i = -1;
	while (++i < --len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	return (str);
}

int main()
{
	char ch[6] = "hello";
	printf("%s\n", ch);
	ft_strrev(ch);
	printf("%s\n", ch);
	return (0);
}