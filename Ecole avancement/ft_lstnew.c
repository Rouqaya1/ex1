/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 11:53:51 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/13 12:24:35 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!t_list)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
