int		ft_atoi(char *str)
{
	int	val =0;
	int	i=0;
	int	sign=1;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{i++;}
	
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{sign = -sign;}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = val * 10 + (str[i] - '0') * sign;
		i++;
	}
	return (val);
}
