#include "libft.h"

//The ft_lstadd_front function adds a new element to the beginning of a linked list. It sets the next pointer of the new element to the current first element of the list and then sets the list pointer to the new element.
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}