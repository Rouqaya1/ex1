/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 12:13:55 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/20 16:43:47 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// caster peut etre le pointeur en long long
int	ft_putptr_fd(void *ptr, int fd)
{
	unsigned long long	p;
	size_t				i;
	int					count;
	int					res;
	char				s[16];

	p = (unsigned long long)ptr;
	i = 0;
	if (!p)
		return (ft_putstr_fd("(nil)", fd));
	count = ft_putstr_fd("0x", fd);
	while (p > 0)
	{
		res = p % 16;
		if (res < 10)
			s[i++] = res + '0';
		else if (res > 9)
			s[i++] = 'a' + (res - 10);
		p /= 16;
	}
	count += i;
	while (i > 0)
		ft_putchar_fd(s[--i], fd);
	return (count);
}
