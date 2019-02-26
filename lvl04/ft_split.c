#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int		is_blank(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
		return (1);
	return (0);
}

char	**ft_split(char *str)
{
	char **arr;
	int i;
	int j;
	int k;
	int len;
	
	i = 0;
	j = 0;
	len = ft_strlen(str);
	arr = (char **)malloc(sizeof(char*)*len + 1);
	while (str[i] != '\0')
	{
		k = 0;
		while (is_blank(str[i]) && str[i] != '\0')
			i++;
		if (str[i] != '\0')
		{
			arr[j] = (char*)malloc(sizeof(char) * len + 1);
			while (!is_blank(str[i]))
			{
				arr[j][k] = str[i];
				i++;
				k++;
			}
			arr[j][k] = '\0';
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}

int		main(void)
{
	char *str = "\t\nhello cat\n";
	char **res;
	int i;

	i = 0;
	res = ft_split(str);
	return (0);
}