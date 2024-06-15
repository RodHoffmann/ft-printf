/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_print_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:56:20 by rohoffma          #+#    #+#             */
/*   Updated: 2024/06/14 13:15:01 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_puthex_lower(unsigned int nb)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (nb > 0)
		return (ft_puthex_lower(nb / 16) + ft_putchar(hex_digits[(nb % 16)]));
	return (0);
}

int	ft_puthex_upper(unsigned int nb)
{
	char	*hex_digits;

	hex_digits = "0123456789ABCDEF";
	if (nb > 0)
		return (ft_puthex_upper(nb / 16) + ft_putchar(hex_digits[(nb % 16)]));
	return (0);
}

int	ft_long_to_puthex(unsigned long nb)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (nb > 0)
		return (ft_long_to_puthex(nb / 16) + ft_putchar(hex_digits[(nb % 16)]));
	return (0);
}

int	ft_putptr(void *ptr)
{
	return (write(1, &"0x", 2) + ft_long_to_puthex((unsigned long)ptr));
}
