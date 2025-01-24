#include "libft.h"

//The function ft_isdigit checks if a given integer corresponds to an ASCII digit character (0-9).
int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}