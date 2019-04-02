#include <unistd.h>
#include <stdlib.h>

void brainfuck(char *str)
{
	char *ptr;
	int loop;

	ptr = (char*)malloc(sizeof(char) * 2048);

	while (*str)
	{
		if (*str == '>')
			++ptr;
		else if (*str == '<')
			--ptr;
		else if (*str == '+')
			++*ptr;
		else if (*str == '-')
			--*ptr;
		else if (*str == '.')
			write(1, ptr, 1);
		else if (*str == '[' && !*ptr)
		{
			loop = 1;
			while(loop)
			{
				str++;
				if (*str == '[')
					loop++;
				if (*str == ']')
					loop--;
			}
		}
		else if (*str == ']' && *ptr)
		{
			loop = 1;
			while (loop)
			{
				str--;
				if (*str == '[')
					loop--;
				if (*str == ']')
					loop++;
			}
		}
		str++;
	}
}

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		brainfuck(av[1]);
	}
	return (0);
}