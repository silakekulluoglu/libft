#include "libft.h"

static int ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	n = ft_abs(n);
    while (n > 9)
    {
        n = n / 10;
        i++;
    }
    i++;
	return (i);
}

static char ft_numindex(int n, int index)
{
	int	i;

	if (n < 0 && index == 0)
		return ('-');
	else
	{
		i = ft_intlen(n) - index - 2;
		n = ft_abs(n);
		while (i >= 0)
		{
			n = n / 10;
			i--;
		}
		return (n % 10 + '0');
	}
}


char	*ft_itoa(int n)
{
	char	*p;
	int		i;

	i = 0;
	if (n == -2147483648)
		p = strdup("-2147483648");
	else
	{
			p = (char *)malloc(ft_intlen(n) + 1);
		if (!p)
			return (NULL);
		while (i < ft_intlen(n))
		{
			p[i] = ft_numindex(n, i);
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}