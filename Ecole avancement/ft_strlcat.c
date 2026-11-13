/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 10:52:57 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/10 11:58:40 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && i + 1 < size)
		dst[i++] += src[j++];
	if (i < size)
		dst[i] = '\0';
	while (src[j])
		j++;
	return (i + j);
}

// int main() {
//   char to[15] = "Hello ";
//   char *from = "world";
//   printf("Before : %s\n", to);  
//   ft_strlcat(to, from, 15);
//   printf("After :  %s", to);
//   return 0;
// }