#include "libft.h"

//The ft_lstdelone function deletes and frees the memory of a single element of a linked list.
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst && !del)
		return ;
	del(lst->content);
	free(lst);
}