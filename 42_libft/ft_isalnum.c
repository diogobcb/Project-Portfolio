#include "libft.h"

//The function ft_isalnum checks if a given integer corresponds to an alphanumeric character, which includes uppercase and lowercase letters as well as digits.
int	ft_isalnum(int n)
{
	if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z')
			|| (n >= '0' && n <= '9'))
			return (1);
	else		
			return (0);
}

/*
int	main(void)
{
	char	c;
	
	c = 'H';
	printf ("%d\n", ft_isalnum(c));
    c = 'x';
    printf ("%d\n", ft_isalnum(c));
    c = '+';
    printf ("%d\n", ft_isalnum(c));
    c = '3';
    printf ("%d\n", ft_isalnum(c));
    return (0);
}*/