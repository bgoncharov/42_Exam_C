#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *new;
	int i;
	int len;

	len = ft_strlen(src);
	i = 0;
	if(!(new = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (len--)
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return(new);
}

int main()
{
	char ch[6] = "hello";
	ft_strdup(ch);
	return (0);
}