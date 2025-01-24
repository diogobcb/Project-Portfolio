#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/* 
int main(int argc, char **argv)
{
	(void)argc;
	
	printf("\n\t>>> USING isalnum() <<<\n\n");
	printf("Sending \'%c\'\n", argv[1][0]);
	
	if (isalnum(argv[1][0]))
		printf("The char \'%c\' is alphanumeric.\n", argv[1][0]);
	else
		printf("The char \'%c\' is not alphanumeric.\n", argv[1][0]);
	
	printf("\n\t>>> USING ft_isalnum() <<<\n\n");
	printf("Sending \'%c\'\n", argv[1][0]);
	
	if (ft_isalnum(argv[1][0]))
		printf("The char \'%c\' is alphanumeric.\n", argv[1][0]);
	else
		printf("The char \'%c\' is not alphanumeric.\n", argv[1][0]);
} */