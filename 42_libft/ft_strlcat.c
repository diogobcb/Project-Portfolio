#include "libft.h"

//The ft_strlcat function appends the NUL-terminated string src to the end of dest. It will append at most size - strlen(dest) - 1 bytes, NUL-terminating the result.
size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len_s;
	size_t	len_d;

	len_s = ft_strlen(src);
	if (n == 0)
		return (len_s);
	len_d = ft_strlen(dest);
	if (n < len_d)
		return (len_s + n);
	i = 0;
	while (src[i] && len_d + i < (n - 1))
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}
/*
int	main()
{
	char dest[] = "cccccccccccc";
	char src[] = "tou farto disto ja";
	printf("%ld \n", ft_strlcat(dest, src, 5));
	printf("%s", dest);
	return(0);
}*/