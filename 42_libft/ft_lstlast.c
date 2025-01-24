#include "libft.h"

//The ft_lstlast function returns the last element of a linked list.
t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}