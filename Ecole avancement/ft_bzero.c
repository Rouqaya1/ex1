/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:55:17 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/10 11:57:07 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
		str[i++] = 0;
}

// int main() {
//   char str[50] = "GeeksForGeeks is for programming geeks.";
//   printf("Before ft_memset(): %s\n", str);  
//   ft_bzero(str + 13, 8*sizeof(char));
//   printf("After ft_memset():  %s", str);
//   return 0;
// }