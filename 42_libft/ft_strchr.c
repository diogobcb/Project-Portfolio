#include "libft.h"

//The ft_strchr function locates the first occurrence of c (converted to a char) in the string pointed to by str. The terminating null character is considered to be part of the string.
char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(str) + 1;
	while (i < len)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
/*
int	main(int ac, char *av[])
{
	char str[] = "Find the char";
	char *x = ft_strchr(str, 'z');
	printf("%s\n", x);
	return (0);
}*/