#include "libft.h"

//The ft_strdup function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it. The pointer may subsequently be used as an argument to the function free(3).
char	*ft_strdup(const char *src)
{
	char	*dup;
	int		e;

	dup = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	e = 0;
	if (!dup)
		return (0);
	while (src[e] != '\0')
	{
		dup[e] = src [e];
		e++;
	}
	dup[e] = '\0';
	return (dup);
}

/*int	main()
{
	char	*str = "Quarenta e Dois";
	char	*copy = ft_strdup(str);
	printf("%s", copy);
}*/