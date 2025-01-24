#include "libft.h"

//The ft_lstsize function returns the number of elements in a linked list.
int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}