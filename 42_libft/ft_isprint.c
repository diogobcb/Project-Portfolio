#include "libft.h"

//The function ft_isprint checks if a given integer corresponds to a printable ASCII character.
int	ft_isprint(int n)
{
	if (n >= 32 && n <= 126)
		return (1);
	return (0);
}