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

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub_str;
    size_t  i;
    size_t  len_s;

    if (!s)
        return (NULL);
    len_s = ft_strlen(s);
    if (start >= len_s)
        len = 0;
    else if (len > len_s - start)
        len = len_s - start;
    sub_str = malloc(len + 1);
    if (!sub_str)
        return (NULL);
    i = 0;
    while (i < len)
    {
        sub_str[i] = s[start + i];
        i++;
    }
    sub_str[i] = '\0';
    return (sub_str);
}
