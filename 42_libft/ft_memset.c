#include "libft.h"

//The ft_memset function fills the first n bytes of the memory area pointed to by s with the constant byte c.
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char str[] = "caralho destas extensoes";
	printf("%s\n", ft_memset(str, 't', 6));
	return (0);
}
*/