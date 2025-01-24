#include "libft.h"

//Outputs the string s to the given file descriptor, followed by a newline.
void	ft_putendl_fd(char const *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}