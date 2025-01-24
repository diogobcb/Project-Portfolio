#include "libft.h"

//The ft_atoi function converts a string representation of an integer to an actual integer value, handling optional leading whitespace and an optional sign.
int ft_atoi(const char *str) {
    int res = 0;
    int signal = 1;
    int i = 0;

    // Skip whitespace characters
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;

    // Check for sign
    if (str[i] == '-' || str[i] == '+') {
        signal = (str[i] == '-') ? -1 : 1;
        i++;
    }

    // Convert numeric characters to integer
    while (str[i] >= '0' && str[i] <= '9') {
        res = res * 10 + (str[i] - '0');
        i++;
    }

    return res * signal;
}

/*
int	main()
{
	char str[] = "42melhorescoladomundo";
	int c = ft_atoi(str);
	printf("%d\n", c);
	return (0);
}*/