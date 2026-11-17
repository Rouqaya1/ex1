/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 13:14:21 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/17 12:26:44 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	size;
	t_list			*current;

	size = 0;
	if (!lst)
		return (size);
	current = lst;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return (size);
}
