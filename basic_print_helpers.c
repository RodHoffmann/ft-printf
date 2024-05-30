/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_print_helpers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:29:15 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/30 18:38:29 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, &"-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, &"-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		c = (nb % 10) + '0';
		write(1, &c, 1);
	}
	else
	{
		c = (nb % 10) + '0';
		write(1, &c, 1);
	}
}

void	ft_putstr(char *s)
{
	while (*s)
	{
		write(1, s++, 1);
	}
}

void	ft_putunint(unsigned int nb)
{
	char	c;

	if (nb >= 10)
	{
		ft_putunint(nb / 10);
		c = (nb % 10) + '0';
		write(1, &c, 1);
	}
	else
	{
		c = (nb % 10) + '0';
		write(1, &c, 1);
	}
}
