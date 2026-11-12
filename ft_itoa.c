/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 10:51:36 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/12 12:10:02 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 10:51:36 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/12 12:08:51 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	ft_count(long n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static void	ft_putnbr(long n, char *s, int *i)
{
	if (n > 10)
		ft_putnbr(n / 10, s, i);
	s[*i++] = n % 10 + '0';
}

char	*ft_itoa(int n)
{
	size_t	size;
	size_t	i;
	long	nb;
	char	*s;

	nb = n;
	size = ft_count(nb);
	s = malloc(sizeof(char) * (size + 1));
	if (!s)
		return (NULL);
	i = 0;
	if (nb < 0)
	{
		s[i++] = '-';
		nb *= -1;
	}
	ft_putnbr(n, s, &i);
	s[i] = '\0';
	return (s);
}

