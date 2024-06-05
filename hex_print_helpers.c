/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_print_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:56:20 by rohoffma          #+#    #+#             */
/*   Updated: 2024/06/01 07:23:58 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libftprintf.h"

void	ft_puthex_lower(unsigned int nb)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (nb > 0)
	{
		ft_puthex_lower(nb / 16);
		ft_putchar(hex_digits[(nb % 16)]);
	}
}

void	ft_puthex_upper(unsigned int nb)
{
	char	*hex_digits;

	hex_digits = "0123456789ABCDEF";
	if (nb > 0)
	{
		ft_puthex_upper(nb / 16);
		ft_putchar(hex_digits[(nb % 16)]);
	}
}

static void	ft_long_to_puthex(unsigned long nb)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (nb > 0)
	{
		ft_long_to_puthex(nb / 16);
		ft_putchar(hex_digits[(nb % 16)]);
	}
}

void	ft_putptr(void *ptr)
{
	write(1, &"0x", 2);
	ft_long_to_puthex((unsigned long)ptr);
}
