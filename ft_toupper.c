int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		c = c - 32;
	return (c);
}