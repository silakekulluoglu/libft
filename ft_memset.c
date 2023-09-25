#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	
	p = (unsigned char *)s;
	while (n != 0)
	{
		p[n - 1] = c;
		n--;
	}
	return (s);
}