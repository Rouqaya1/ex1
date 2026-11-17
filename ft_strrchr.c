/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:49:56 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/17 15:34:31 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int	i;

	if (!string)
		return (NULL);
	i = 0;
	while (string[i])
		i++;
	if ((unsigned char)c == 0)
		return ((char *)&string[i]);
	while (i > 0)
	{
		i--;
		if (string[i] == (unsigned char)c)
			return ((char *)&string[i]);
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