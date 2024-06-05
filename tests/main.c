/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:52:04 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/31 23:48:49 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libftprintf.h"

int	main(void)
{
	char	c = 'a';
	char	*ptr = &c;

	ft_printf("------- Testing ft_printf -------\n");
	ft_printf("ft_printf: testing for char 't': %c\n", 't');
	printf("printf: output for char 't': %c\n", 't');
	ft_printf("ft_printf: testing for int '4107': %d\n", 4107);
	printf("printf: output for int '4107': %d\n", 4107);
	ft_printf("ft_printf: testing for str 'Hello World': %s\n", "Hello World");
	printf("printf: output for str 'Hello World': %s\n", "Hello World");
	ft_printf("ft_printf: testing for str 'Hello World': %u\n", 4294967295U);
	printf("printf: output for str 'Hello World': %u\n", 4294967295U);
	ft_printf("ft_printf: testing for percentage sign: %%\n");
	printf("printf: output for percentage sign: %%\n");
	ft_printf("ft_printf: testing for 1234 to hex(lowercase): %x\n", 1234);
	printf("printf: output for 1234 to hex (lowercase): %x\n", 1234);
	ft_printf("ft_printf: testing for 1234 to hex(uppercase): %X\n", 1234);
	printf("printf: output for 1234 to hex (uppercase): %X\n", 1234);
	ft_printf("ft_printf: testing for pointer address: %p\n", ptr);
	printf("printf: output for pointer address: %p\n", ptr);
	ft_printf("------- End of tests for ft_printf -------\n");
	return (0);
}
