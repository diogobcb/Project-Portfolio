#include "libft.h"

//The ft_strlen function calculates the length of the string str, excluding the terminating null byte ('\0').
size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/*int	main()
{
	char str[12] = "hello world";

	printf("%zu\n" , ft_strlen(str));

	return (0);
}*/