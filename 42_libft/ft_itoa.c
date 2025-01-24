#include "libft.h"

//The ft_itoa function converts an integer to a string representation of that integer.
static size_t	ft_digits(int n)
{
	size_t	digits;

	digits = 0;
	if (n <= 0)
		digits++;
	while (n != 0)
	{
		n /= 10; // Divide n by 10
        digits++; // Increment digit count
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	size_t	digits;
	int		signal;
	char	*result;

	digits = ft_digits(n);
	signal = 1;
	result = malloc((digits + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[digits] = '\0';
	digits--;
	if (n < 0)
	{
		signal = -1;
		result[0] = '-';
	}
	else if (n == 0)
		result[digits] = '0';
	while (n != 0)
	{
		result[digits] = (((n % 10) * signal) + '0');
		n = n / 10;
		digits--;
	}
	return (result);
}
/*
int    main(void)
{
    printf("%s\n", ft_itoa(-5066));
    printf("%s\n", ft_itoa(84984));
    printf("%s\n", ft_itoa(898562));
    printf("%s\n", ft_itoa(-2147483648LL));
    printf("%s\n", ft_itoa(684468556));
    printf("%s\n", ft_itoa(0));
    return (0);
}*/