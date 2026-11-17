/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:40:34 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/17 12:04:50 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (source == NULL || n == 0)
		return (NULL);
	else if (source == destination)
		return (dest);
	else if (destination < source)
		ft_memcpy(destination, source, n);
	else
	{
		n -= 1;
		while (n > 0)
		{
			destination[n] = source[n];
			n--;
		}
	}
	return (dest);
}
