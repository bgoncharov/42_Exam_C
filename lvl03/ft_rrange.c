#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int		*res;
	int		len;

	len = (end >= start) ? end - start + 1 : start - end + 1;
	if (!(res = (int*)malloc(sizeof(int) * len)))
		return (NULL);
	 while (len--)
		 res[len] = (end >= start) ? start++ : start--;
	return (res);
}

int main() // DELETE
{
	ft_rrange(-3, 6);
	return (0);
}