int	ft_atoi(const char *nptr)
{
	int	res;
	int	i;
	int	j;

	res = 0;
	i = 0;
	j = 1;
	while ((*(nptr + i) <= 13 && *(nptr + i) >= 9) || *(nptr + i) == 32)
		i++;
	if (*(nptr + i) == '+' || *(nptr + i) == '-')
	{
		if (*(nptr + i) == '-')
			j *= -1;
		i++;
	}
	while (*(nptr + i) >= '0' && *(nptr + i) <= '9')
	{
		res = (res * 10) + *(nptr + i) - 48;
		i++; 
	}
	return j * res;
}