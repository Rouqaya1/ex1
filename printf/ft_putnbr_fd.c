/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:12:04 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/20 16:43:30 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	count;

	count = 0;
	if (n == 2147483647)
		return (write (fd, "2147483647", 10));
	else if (n == -2147483648)
		return (write (fd, "-2147483648", 11));
	else if (n < 0)
	{
		n *= -1;
		count += ft_putchar_fd('-', fd);
		count += ft_putnbr_fd(n, fd);
	}
	else if (n >= 0)
	{
		if (n > 9)
			count += ft_putnbr_fd(n / 10, fd);
		count += ft_putchar_fd(n % 10 + '0', fd);
	}
	return (count);
}
