#include "libft.h"

//The ft_memcpy function copies n bytes from memory area src to memory area dest. The memory areas must not overlap. Use ft_memmove if the memory areas do overlap.
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*d;
	char			*s;
	size_t			i;

	i = 0;
	d = (char *) dest;
	s = (char *) src;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	if (dest == src)
		return (0);
	return (dest);
}

/*int	main()
{
	char dest[50];
	char src[] = "queremos karaoke na 42";
	printf("%s\n", ft_memcpy(dest, src, 14));
	return (0);
}*/