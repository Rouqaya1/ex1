/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 11:55:54 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/16 11:58:48 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  add in libft.h the prototype

int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (0);
		set++;
	}
	return (1);
}

// size_t	str_len(char const *s)
// {
//   size_t i;
//   i = 0;
//   while (s[i])
// 	i++;
//   return (i);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	size;
	int		start_word;
	int		end_word;
	char	*word_trimed;

	i = 0;
	while (s1[i] && !is_set(s1[i], set))
		i++;
	if (!s1[i])
		return (ft_calloc(1, sizeof(char)));
	start_word = i;
	size = ft_strlen(s1);
	i = size - 1;
	while (s1[i] && !is_set(s1[i], set))
		i--;
	end_word = i;
	word_trimed = malloc(sizeof(char) * (end_word - start_word + 2));
	if (!word_trimed)
		return (NULL);
	i = 0;
	while (start_word <= end_word)
		word_trimed[i++] = s1[start_word++];
	word_trimed[i] = '\0';
	return (word_trimed);
}

// int main() {
//   char *s = "****";
//   char *set = "*";
//   printf("%s", ft_strtrim(s, set));
//   return 0;
// }