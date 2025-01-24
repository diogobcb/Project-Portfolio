#include "libft.h"

//This function, ft_lstnew, creates a new node for a linked list. It allocates memory for the node, assigns the provided content to the node, and initializes the next pointer to NULL.
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->next = NULL;
	new->content = content;
	return (new);
}