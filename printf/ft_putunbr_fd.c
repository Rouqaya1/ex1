/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 16:10:28 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/20 16:44:01 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_fd(unsigned int n, int fd)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_putunbr_fd(n / 10, fd);
	count += ft_putchar_fd(n % 10 + '0', fd);
	return (count);
}
