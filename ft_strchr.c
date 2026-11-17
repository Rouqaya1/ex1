/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:26:34 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/16 16:26:17 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

// int main (void){
// 	char *test = "Je m\'appelle ouioui";
// 	char *r = ft_strchr(test, 'b');
// 	printf("Le return : %s", r);
// 	return (0);
// }