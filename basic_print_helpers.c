/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_print_helpers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:29:15 by rohoffma          #+#    #+#             */
/*   Updated: 2024/06/01 12:53:52 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putnbr(int nb, int bytes_written)
{
	char	c;

	if (nb == -2147483648)
		return (bytes_written + (write(1, &"-2147483648", 11)));
	if (nb < 0)
	{
		bytes_written += write(1, &"-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, bytes_written);
		c = (nb % 10) + '0';
		bytes_written += write(1, &c, 1);
	}
	else
	{
		c = (nb % 10) + '0';
		bytes_written += write(1, &c, 1);
		return (bytes_written);
	}
}

int	ft_putstr(char *s, int bytes_written)
{
	while (*s)
	{
		bytes_written += write(1, s++, 1);
	}
	return (bytes_written);
}

int	ft_putunint(unsigned int nb, int bytes_written)
{
	char	c;

	if (nb >= 10)
	{
		ft_putunint(nb / 10, bytes_written);
		c = (nb % 10) + '0';
		bytes_written += write(1, &c, 1);
	}
	else
	{
		c = (nb % 10) + '0';
		bytes_written = write(1, &c, 1);
		return (bytes_written);
	}
}
