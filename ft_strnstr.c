/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 16:03:43 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/17 13:29:08 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		if (s1[i] == s2[0])
		{
			while (s2[j] && s1[i + j] == s2[j])
				j++;
			if (!s2[j])
				return ((char *)&s1[i]);
			else
				return (NULL);
		}
		i++;
	}
	return (NULL);
}

// int main(void) {
//   char *tab = "Hello World !";
//   char *tab1 = "Wold";
//   printf("Resultat : %p", ft_strnstr(tab, tab1, 9));
//   return 0;
// }