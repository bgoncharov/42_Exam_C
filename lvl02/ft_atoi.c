int	ft_atoi(const char *str)
{
	int res;
	int sign;

	sign = 1;
	res = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' ||
			*str == '\v' || *str == '\f' || *str == '\n')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
		res = (res * 10) + (*str++ - '0');
	return (res * sign);
}