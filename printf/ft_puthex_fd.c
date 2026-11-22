/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:18:34 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/20 16:43:24 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_fd(unsigned int nb, int fd)
{
	int		count; 
	int		i;
	int		res;
	char	s[8];

	i = 0;
	if (nb < 10)
		return (ft_putchar_fd(nb + '0', fd));
	while (nb > 0)
	{
		res = nb % 16;
		if (res < 10)
			s[i++] = res + '0';
		else if (res > 9)
			s[i++] = 'a' + (res - 10);
		nb /= 16;
	}
	count = i;
	while (i > 0)
		ft_putchar_fd(s[--i], fd);
	return (count);
}

// int main(void) {
//   ft_puthex_fd(4098, 1);
//   return (0);
// }