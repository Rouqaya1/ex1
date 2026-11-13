/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:40:34 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/10 11:58:12 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *to, const void *from, size_t numBytes)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	i = 0;
	dest = (unsigned char *)to;
	src = (unsigned char *)from;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < numBytes)
	{
		dest[i++] = 0;
	}
	return (dest);
}
