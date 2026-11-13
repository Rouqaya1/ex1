/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 12:00:26 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/10 15:31:12 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Remplacer len_s par la fonction strlen directement dispo depuis la libft
// a faire pour d'autre fonction 

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char static	one_pb(char *sub_str)
{
	sub_str = malloc(sizeof(char));
	if (!sub_str)
		return (NULL);
	sub_str[0] = '\0';
	return (sub_str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;
	size_t	j;
	size_t	len_s;

	len_s = 0;
	while (s[len_s])
		len_s++;
	if (len == 0 || len_s < start)
		// J'ai un soucis ici il me dis que lq viariable doit etre initialiser 
		// avantd'etre envoyer en parametrde fonction 
		one_pb(sub_str);
	if (len > len_s - start)
		len = len_s - start;
	sub_str = malloc(sizeof(char) * len + 1);
	if (!sub_str)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && j < len)
		sub_str[j++] = s[i++];
	sub_str[j] = '\0';
	return (sub_str);
}

// int main (void) {
//   char *s = "OH MINCe";
//   printf("Je veux le mot : %s", ft_substr(s, 4, 10)); 
//   return (0);
// }