#include "libft.h"

//This function checks if a given integer corresponds to an ASCII alphabetic character (either uppercase or lowercase).
int	ft_isalpha(int n)
{
	if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z'))
		return (1);
	else	
		return (0);
}
/*
int    main(void)
{
    char    c;

    c = 'C';
    printf ("%d\n", ft_isalpha(c));
    c = 'i';
    printf ("%d\n", ft_isalpha(c));
    c = '*';
    printf ("%d\n", ft_isalpha(c));
    return (0);
}*/