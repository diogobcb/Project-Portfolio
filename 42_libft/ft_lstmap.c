#include "libft.h"

//The ft_lstmap function iterates over a linked list and applies a function to each element, creating a new list with the results.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list    *new;
    t_list    *elem;

    if (!lst)
        return (NULL);
    new = 0;
    while (lst)
    {
        elem = ft_lstnew(f(lst->content));
        if (!elem)
        {
            ft_lstclear(&new, del);
            return (NULL);
        }
        ft_lstadd_back(&new, elem);
        lst = lst->next;
    }
    return (new);
}