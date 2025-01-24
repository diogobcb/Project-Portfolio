#include "libft.h"

//A function that checks if a given character is an alphabetic letter (A-Z or a-z).
void	ft_bzero(void *s, size_t n)
{
	char		*c;
	size_t		i;

	c = s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}

/*
int	main(void)
{
	char str[] = 'qwerty';
	ft_bzero(str, 5);
	printf("bla bla bla: %s\n", str);
	return (0);
}
*/