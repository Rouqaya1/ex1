/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmhex_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 16:40:10 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/24 12:17:20 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putmhex_fd(unsigned int nb, int fd)
{
	int		i;
	int		res;
	char	s[8];
	int		count;

	i = 0;
	count = 0;
	if (nb == 0)
		return (ft_putchar_fd(nb + '0', fd));
	while (nb > 0)
	{
		res = nb % 16;
		if (res < 10)
			s[i++] = res + '0';
		else if (res > 9)
			s[i++] = 'A' + (res - 10);
		nb /= 16;
	}
	count = i;
	while (i > 0)
		ft_putchar_fd(s[--i], fd);
	return (count);
}
