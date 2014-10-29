int		ft_atoi(char *str)
{
	int val;
	int	i;
	int	sign;

	sign = 1;
	val = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = val * 10 + (str[i] - '0') * sign;
		i++;
	}
	return (val);
}
