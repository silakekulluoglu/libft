#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t 	lens2;
	char	*ptr;

	if (!s1 && !s2)
		return strdup("");
	if (s1 && !s2)
		return strdup(s1);
	if(!s1 && s2)
		return strdup(s2);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	ptr = (char *)malloc(lens1 + lens2);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, lens1 + 1);
	ft_strlcat(ptr, s2, lens1 + lens2 + 1);
	return (ptr);
}
