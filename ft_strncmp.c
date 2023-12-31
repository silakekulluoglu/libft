#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t	i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;

	i = 0;
	while (i < n && p1[i] != '\0' && p2[i] != '\0' && p1[i] == p2[i])
		i++;
	if (i == n)
		return (0);
	return (int)(p1[i] - p2[i]);
}
