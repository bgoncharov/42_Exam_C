#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1 += 1;
		s2 += 1;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int main() /* DELETE */
{
	char ch1[10] = "\200";
	char ch2[10] = "\0";

	int x = ft_strcmp(ch1, ch2);
	int y = strcmp(ch1, ch2);

	printf("%d\n", x);
	printf("%d\n", y);

}