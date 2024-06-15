/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:43:03 by rohoffma          #+#    #+#             */
/*   Updated: 2024/06/14 13:39:47 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_printf(const char *format, ...);
int	ft_putchar(int i);
int	ft_putnbr(int nb);
int	ft_putstr(char *s);
int	ft_putunint(unsigned int nb);
int	ft_puthex_lower(unsigned int nb);
int	ft_puthex_upper(unsigned int nb);
int	ft_putptr(void *ptr);

#endif /* FT_PRINTF_H */
