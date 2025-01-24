#include "libft.h"

//The ft_memchr function locates the first occurrence of a character in a string.
void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *) str;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return ((unsigned char *) &s[i]);
		i++;
	}
	return (0);
}

/*
int	main()
{
	char f1[] = "tgood sailors and bad ships";
	char *f2 = ft_memchr(f1, 't', 12);
	printf("%p\n", f2);
	return(0);
}*/