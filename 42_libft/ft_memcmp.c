#include "libft.h"
#include <stddef.h>

//The ft_memcmp function compares the first n bytes of two memory areas, str1 and str2. It returns an integer less than, equal to, or greater than zero if the first n bytes of str1 are found to be less than, to match, or be greater than the first n bytes of str2.
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	if (n == 0)
		return (0);
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	unsigned int n = 9;
	char s1[] = "ultravioleta";
	char s2[] = "ultrasonico";
	printf("%d\n", ft_memcmp(s1, s2, n));
	return (0);
}*/