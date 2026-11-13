/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 12:00:23 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/12 13:01:08 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s2;
	size_t	len_s1;
	size_t	i;
	char	*s;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	s = malloc(sizeof(char) * (len_s1 + len_s2) + 1);
	if (!s)
		return (NULL);
	i = 0;
	len_s1 = 0;
	len_s2 = 0;
	while (s1[len_s1])
		s[i++] = s1[len_s1++];
	while (s2[len_s2])
		s[i++] = s2[len_s2++];
	s[i] = '\0';
	return (s);
}

// int main (void) {
// 	char *s = "Chipeur arrete de chiper, ";
// 	char *sss = "OH MINCE";
// 	printf("%s", ft_strjoin(s, sss)); 
// 	return (0);
// }