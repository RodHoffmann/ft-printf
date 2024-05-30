/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_print_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:56:20 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/30 19:20:44 by rohoffma         ###   ########.fr       */
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
