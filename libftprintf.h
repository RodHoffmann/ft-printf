/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:43:03 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/31 23:44:28 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

int	ft_printf(const char *format, ...);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *s);
void	ft_putunint(unsigned int nb);
void	ft_puthex_lower(unsigned int nb);
void	ft_puthex_upper(unsigned int nb);
void	ft_putptr(void *ptr);

#endif /* LIBFTPRINTF_H */
