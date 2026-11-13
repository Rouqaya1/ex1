/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 16:03:43 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/10 11:58:58 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		if (s1[i] == s2[0])
		{
			while (s2[j] && s1[i + j] == s2[j])
				j++;
			if (!s2[j])
				return (&s1[i]);
			else
				return (NULL);
		}
		i++;
	}
}

// int main(void) {
//   char *tab = "Hello World !";
//   char *tab1 = "Wold";
//   printf("Resultat : %p", ft_strnstr(tab, tab1, 9));
//   return 0;
// }