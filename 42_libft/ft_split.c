#include "libft.h"

//Function that calculates the length of a word in a string until a delimiter character is encountered or the string ends.
size_t	wordlen(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		count++;
	}
	return (count);
}

size_t	wordcount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			i += wordlen(&s[i], c);
		}
		else
			i++;
	}
	return (count);
}

char	*wordcpy(char *dst, const char *src, char c)
{
	int	i;

	i = 0;
	while (src[i] != c && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_free(char **ret, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(ret[i]);
		i++;
	}
	free(ret);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**ret;

	ret = malloc((wordcount (s, c) * sizeof(char *)) + sizeof(char *));
	if (!ret)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			ret[j] = malloc((wordlen(&s[i], c) + 1) * sizeof(char));
			if (!ret)
				return (ft_free(ret, j));
			wordcpy(ret[j], &s[i], c);
			j++;
			i += wordlen(&s[i], c);
		}
		else
			i++;
	}
	ret[j] = NULL;
	return (ret);
}

/*int	main(void)
{
	char	*ptr;
	char	**new;

	ptr = "split\\\this\\\\\string";
	new = (ft_split(ptr, '\'));
	printf("%s\n%s\n%s\n%s\n", new[0], new[1], new[2], new[3]);
	return (0);
}
*/