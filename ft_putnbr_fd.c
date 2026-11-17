/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 11:45:11 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/16 11:54:08 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 2147483647)
		write (fd, "2147483647", 10);
	else if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n, fd);
	}
	else if (n >= 0)
	{
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}
