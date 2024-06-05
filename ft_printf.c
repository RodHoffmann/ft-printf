/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:23:46 by rohoffma          #+#    #+#             */
/*   Updated: 2024/06/01 20:33:15 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libftprintf.h"

void	print_arg(char c, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int	bytes_written;

	va_start(args, format);
	i = 0;
	bytes_written = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			bytes_written += print_arg(format[i], args);
		}
		else
			bytes_written += ft_putchar(format[i]);
		i++;
	}
	return (bytes_written);
}

int	print_arg(char c, va_list args)
{
	int	bytes_written;

	bytes_written = 0;
	if (c == 'c')
		bytes_written = ft_putchar(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		bytes_written = ft_putnbr(va_arg(args, int));
	else if (c == 's')
		bytes_written = ft_putstr(va_arg(args, char *));
	else if (c == 'u')
		bytes_written = ft_putunint(va_arg(args, unsigned int));
	else if (c == '%')
		bytes_written = ft_putchar('%');
	else if (c == 'x')
		bytes_written = ft_puthex_lower(va_arg(args, unsigned int));
	else if (c == 'X')
		bytes_written += ft_puthex_upper(va_arg(args, unsigned int));
	else if (c == 'p')
		bytes_written += ft_putptr(va_arg(args, void *));
	return (bytes_written);
}
