/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 10:52:57 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/16 16:25:57 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	len_dst;


	i = 0;
	j = 0;
	len = ft_strlen(src);
	while (dst[i] && i < size)
		i++;
	if (i == size)
		return (size + len);
	len_dst = i;
	while (src[j] && size > 0 && i < size - 1)
		dst[i++] = src[j++];
	if (i < size)
		dst[i] = '\0';
	return (len + len_dst);
}

// int main() {
//   char to[15] = "Hello ";
//   char *from = "world";
//   printf("Before : %s\n", to);  
//   ft_strlcat(to, from, 15);
//   printf("After :  %s", to);
//   return 0;
// }