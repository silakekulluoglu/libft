#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	size_t	i;
	int 	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (!(i == 0 || i == ft_strlen(s) - 1))
		{
			if ((s[i] != c) && (s[i - 1] == c))
				count++;
		}
		i++;
	}
	if (s[0] == c)
		count--;
	return (count + 1);
}

char	*ft_arrstr(char const *s, char c, int index)
{
	int start;
	int seen;
	int end;

	seen = 0;
	start = 0;
	end = 0;
	while (s[end] == c)
		end++;
	while (seen != index - 1 && s[end])
	{
		if (s[end] == c && s[end + 1] != c)
			seen++;
		end++;
	}
	start = end;
	while (s[end] != c && s[end])
		end++;
	return ft_substr(s, start, end - start);
}


char	**ft_split(char const *s, char c)
{
	int		i;
	int		word_count;
	char	**arr;

	i = 0;
	word_count = ft_countwords(s, c);
	arr = (char **)malloc((word_count + 1)* sizeof(char*));
	if (!arr)
		return (NULL);
	while (i < word_count)
	{
		arr[i] = (char *)malloc(ft_strlen(ft_arrstr(s, c, i + 1)) + 1);
		if (!arr[i])
			return (NULL);
		arr[i] = ft_arrstr(s, c, i + 1);
		arr[i][ft_strlen(ft_arrstr(s, c, i + 1))] = '\0';
		i++;
	}
	return (arr);
}