#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		*res;
	int		len;

	len = (end >= start) ? end - start + 1 : start - end + 1;
	if (!(res = (int*)malloc(sizeof(int) * len)))
		return (NULL);
	while (end != start)
		*res++ = end > start ? start++ : start--;
	*res = start;
	return (res - len);
}

int main()
{
	ft_range(-3, 6);
	return (0);
}