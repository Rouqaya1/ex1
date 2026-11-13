/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:49:56 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/10 11:59:02 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	while (string[i] - 1)
	{
		if (string[i] == c)
			return ((char *)&string[i]);
		i--;
	}
	return (NULL);
}

/*
int main (void){
	char *test = "Je m\'appelle ouioui";
	char *r = ft_strrchr(test, 'o');
	printf("Le return : %s", r);
	return (0);
}*/