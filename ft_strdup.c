/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:01:24 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/10 11:58:26 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// La fonction strdup() renvoie un pointeur sur une nouvelle chaîne de caractère
// qui est dupliquée depuis s. La mémoire occupée par cette nouvelle chaîne est 
// obtenue en appelant malloc(3), et peut (doit) donc être libérée avec free(3)

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	dup = malloc(i * sizeof(char) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
