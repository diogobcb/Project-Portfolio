#include "libft.h"

//The ft_memmove function copies n bytes from memory area src to memory area dest. The memory areas may overlap.
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	if ((size_t)dest - (size_t)src < n)
	{
		i = n - 1;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main()
{
	char dest[50] = "qwertyqweytrqwyetr";
	char src[] = "copy these bytes";
	printf("%s\n", ft_memmove(dest, src, 14));
	return (0);
}*/