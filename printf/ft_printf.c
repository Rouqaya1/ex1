/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 12:17:38 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/24 13:27:29 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conv(va_list *args, char c, int fd)
{
	if (c == 'c')
		return (ft_putchar_fd((char)va_arg(*args, int), fd));
	else if (c == 's')
		return (ft_putstr_fd(va_arg(*args, char *), fd));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_fd(va_arg(*args, int), fd));
	else if (c == 'u')
		return (ft_putunbr_fd(va_arg(*args, unsigned int), fd));
	else if (c == 'x')
		return (ft_puthex_fd(va_arg(*args, unsigned int), fd));
	else if (c == 'X')
		return (ft_putmhex_fd(va_arg(*args, unsigned int), fd));
	else if (c == 'p')
		return (ft_putptr_fd(va_arg(*args, void *), fd));
	else if (c == '%')
		return (ft_putchar_fd('%', fd));
	else
		return (0);
}

static int	print_condition_loop(va_list *args, const char *format)
{
	int		res;
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			res = ft_conv(args, format[i + 1], 1);
			if (res >= 0)
			{
				count += res;
				i += 2;
			}
			else
				count += ft_putchar_fd(format[i++], 1);
		}
		else
			count += ft_putchar_fd(format[i++], 1);
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = print_condition_loop(&args, format);
	va_end(args);
	return (count);
}
