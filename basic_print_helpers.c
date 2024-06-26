/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_print_helpers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:29:15 by rohoffma          #+#    #+#             */
/*   Updated: 2024/06/14 16:59:28 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(int i)
{
	unsigned char	c;

	c = (unsigned char)i;
	return (write(1, &c, 1));
}

int	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
		return (write(1, &"-2147483648", 11));
	if (nb < 0)
		return (write(1, &"-", 1) + ft_putnbr(nb * -1));
	if (nb >= 10)
	{
		c = (nb % 10) + '0';
		return (ft_putnbr(nb / 10) + write(1, &c, 1));
	}
	else
	{
		c = (nb % 10) + '0';
		return (write(1, &c, 1));
	}
}

int	ft_putstr(char *s)
{
	int	bytes_written;

	bytes_written = 0;
	while (*s)
	{
		bytes_written += write(1, s++, 1);
	}
	return (bytes_written);
}

int	ft_putunint(unsigned int nb)
{
	char	c;

	if (nb >= 10)
	{
		c = (nb % 10) + '0';
		return (ft_putunint(nb / 10) + write(1, &c, 1));
	}
	else
	{
		c = (nb % 10) + '0';
		return (write(1, &c, 1));
	}
}
