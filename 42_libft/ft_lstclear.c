#include "libft.h"

//The ft_lstclear function deletes and frees the memory of a linked list. It uses the ft_lstdelone function to delete each element of the list.
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}