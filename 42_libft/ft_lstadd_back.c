#include "libft.h"

//The ft_lstadd_back function adds a new element to the end of a linked list. It checks if the list is not null, finds the last element, and appends the new element to it. If the list is initially empty, it sets the new element as the first element.
void	ft_lstadd_back(t_list **lst, t_list *new) {
	
    t_list	*last;

if (lst != '\0' && lst != '\0')
    {
        last = ft_lstlast(*lst);
        last->next = new;
        return;
    }
    *lst = new;
}