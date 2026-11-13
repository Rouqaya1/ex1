
#include <stdlib.h>
#include <stdio.h>

// #include "libft.h"

static int	is_sep(char c, char sep)
{
	if (c == sep)
		return (0);
	return (1);
}

static int	count_word(char const *s, char sep)
{
	size_t	i;
	int		nb_word;
	int		in_word;

	i = 0;
	nb_word = 0;
	in_word = 0;
	while (s[i])
	{
		if (!is_sep(s[i], sep) && in_word == 0)
		{
			in_word = 1;
			nb_word++;
		}
		else if (is_sep(s[i], sep))
			in_word = 0;
		i++;
	}
	return (nb_word);
}

static char	*cpy_word(char const *s, char sep, size_t *pos)
{
	size_t	i;
	size_t	j;
	size_t	len_word;
	char	*word;

	i = *pos;
	while (s[i] && is_sep(s[i], sep))
		i++;
	len_word = 0;
	while (s[i + len_word] && !is_sep(s[i + len_word], sep))
		len_word++;
	word = malloc(sizeof(char) * (len_word + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (j < len_word)
	{
		word[j] = s[i + j];
		j++;
	}
	word[j] = '\0';
	*pos = i + len_word;
	return (word);
}

static void	free_split(char **tab, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	int		nb_word;

	if (!s)
		return (NULL);
	nb_word = count_word(s, c);
	tab = malloc(sizeof(char *) * (nb_word + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (j < (size_t)nb_word)
	{
		tab[j] = cpy_word(s, c, &i);
		if (!tab[j])
		{
			free_split(tab, j);
			return (NULL);
		}
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

// int	main(void) {
// 	int	i = 0;
// 	char **result = ft_split("bonjour***tout***le***monde", '*');
// 	if (!result)
// 		return (1);
// 	while (result[i]) {
// 		printf("result[%d] = [%s]\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
