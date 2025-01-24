#include "libft.h"

//The function ft_isascii checks if a given integer corresponds to an ASCII character.
int	ft_isascii(int n)
{
	if (n >= 0 && n <= 127)
		return (1);
	return (0);
}
/*
int    main(void)
{
    char    c;

    c = 200;
    printf("%d\n", ft_isascii(c));
    c = -3;
    printf("%d\n", ft_isascii(c));
    c = 25;
    printf("%d\n", ft_isascii(c));
}*/