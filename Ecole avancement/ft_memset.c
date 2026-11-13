/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 09:28:51 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/10 11:58:15 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
		str[i++] = (unsigned char)c;
	return (str);
}

// int main() {
//   char str[50] = "GeeksForGeeks is for programming geeks.";
//   printf("Before ft_memset(): %s\n", str);  
//   ft_memset(str + 13, '.', 8*sizeof(char));
//   printf("After ft_memset():  %s", str);
//   return 0;
// }