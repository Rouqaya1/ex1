/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 10:51:36 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/12 11:49:29 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char static	ft_putnbr(int n, char *s, int *i)
{
	if (n > 10)
		ft_putnbr(n / 10, s, i);
	s[*i++] = n % 10 + '0';
}

char	*ft_itoa(int n)
{
	size_t	size;
	size_t	i;
	char	*s;

	size = 1;
	if (n == INT_MAX)
		ft_strdup("2147483647");
	else if (n == INT_MIN)
		ft_strdup("-2147483648");
	else if (n >= 0 && n < 10)
	{
		s = malloc(sizeof(char) + 2);
		if (!s)
			return (NULL);
		s[0] = n + '0';
		s[1] = '\0';
		return (s);
	}
	while (n != 0 && n / 10)
		size++;
	s = malloc(sizeof(char) * (size + 2));
	if (!s)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		s[i++] = '-';
		n *= -1;
	}
	ft_putnbr(n, s, &i);
	s[i] = '\0';
	return (s);
}
