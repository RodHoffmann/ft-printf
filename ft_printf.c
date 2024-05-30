/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:23:46 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/30 18:00:07 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
1.- 
*/

#include <stdarg.h>
#include "libftprintf.h"

void	print_arg(char c, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			print_arg(format[i], args);
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	return (i);
}

void	print_arg(char c, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int));
}
