#include "libft.h"

//The ft_strncmp function compares the two strings s1 and s2. It compares not more than n characters. Because ft_strncmp is designed for comparing strings rather than binary data, characters that appear after a '\0' character are not compared.
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*int	main()
{
	unsigned int n = 9;
	char s1[] = "ultravioleta";
	char s2[] = "ultrasonico";
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}*/