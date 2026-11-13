/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 16:56:11 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/10 11:57:12 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*tab;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	tab = malloc(nmemb * size);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < nmemb)
		tab[i++] = 0;
	return (tab);
}

// La fonction calloc() alloue la mémoire nécessaire pour un tableau de nmemb 
// éléments de size octets, et renvoie un pointeur vers la mémoire allouée. 
// Cette zone est remplie avec des zéros. 
// Si nmemb ou si size est nulle, calloc renvoie soit NULL ou un unique pointeur
//  qui pourra être passé ultérieurement à free() avec succès