#include <stdlib.h>
#include <stdio.h> //DELETE

char    *ft_itoa(int n)
{
    char    ret[11];
    char    *r;
    int     neg;
    int     i;
    int     j;

    j = 0;
    i = 0;
    neg = n < 0 ? -1 : 1;
    while (neg * n > 9 || neg * n < 0)
    {
        ret[i++] = '0' + neg * (n % 10);
        n = n / 10;
    }
    ret[i++] = '0' + neg * n;
    if (neg < 0)
        ret[i++] = '-';
    if ((r = (char *)malloc(sizeof(char) * i)) == NULL)
        return (NULL);
    r[i] = '\0';
    while (i--)
        r[i] = ret[j++];
    return (r);
}

int main() //DELETE
{
	int x = 0;
	char *ch;
	ch = ft_itoa(x);
	printf("%s\n", ch);
	return (0);
}