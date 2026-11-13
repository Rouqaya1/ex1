/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 13:14:21 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/13 13:29:57 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	size;
	t_list			*current;

	current = lst;
	size = 0;
	if (!lst)
		return (size);
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return (size);
}
