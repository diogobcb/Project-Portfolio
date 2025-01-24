#include "libft.h"

//The ft_calloc function is a custom implementation of the calloc function in C, which allocates memory for an array of n elements, each of size bytes, and initializes all bytes in the allocated storage to zero.
void	*ft_calloc(size_t n, size_t size)
{
	char				*mem_alloc;
	size_t				i;

	i = 0;
	mem_alloc = (char *)malloc(n * size);
	if (mem_alloc == NULL)
		return (NULL);
	while (i < n * size)
	{
		mem_alloc[i] = 0;
		i++;
	}
	return ((void *)mem_alloc);
}

