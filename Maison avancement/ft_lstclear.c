#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *node;
	t_list *temp;

	if (!lst)
		return ;
	node = *lst;
	temp = node;
	while (node)
	{
		temp = node->next;
		(*del)(node->content);
		free(node);
		node = temp;
	}
	*lst = NULL;
}