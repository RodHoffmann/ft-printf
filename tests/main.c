/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:52:04 by rohoffma          #+#    #+#             */
/*   Updated: 2024/06/14 16:09:21 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include "../ft_printf.h"

static void	return_test(int test_ft, int test);

int	main(void)
{
	int	test1_ft;
	int	test1;
	int	test2_ft;
	int	test2;
	int	test3_ft;
	int	test3;
	int	test4_ft;
	int	test4;
	int	test5_ft;
	int	test5;
	int	test6_ft;
	int	test6;
	int	test7_ft;
	int	test7;
	int	test8_ft;
	int	test8;
	int	test9_ft;
	int	test9;
	int	test10_ft;
	int	test10;
	int	test11_ft;
	int	test11;
	char	c = 'a';
	char	*ptr = &c;
	char	*null_ptr = NULL;

	ft_printf("------- Tests for ft_printf -------\n");
	test1_ft = ft_printf("ft_printf: testing for char 't': %c\n", 't');
	test1 = printf("or_printf: testing for char 't': %c\n", 't');
	return_test(test1_ft, test1);
	test2_ft = ft_printf("ft_printf: testing for int '4107': %d\n", 4107);
	test2 = printf("or_printf: testing for int '4107': %d\n", 4107);
	return_test(test2_ft, test2);
	test3_ft = ft_printf("ft_printf: testing for str 'Hello World': %s\n", "Hello World");
	test3 = printf("or_printf: testing for str 'Hello World': %s\n", "Hello World");
	return_test(test3_ft, test3);
	test4_ft = ft_printf("ft_printf: testing for str 'Hello World': %u\n", 4294967295U);
	test4 = printf("or_printf: testing for str 'Hello World': %u\n", 4294967295U);
	return_test(test4_ft, test4);
	test5_ft = ft_printf("ft_printf: testing for percentage sign: %%\n");
	test5 = printf("or_printf: testing for percentage sign: %%\n");
	return_test(test5_ft, test5);
	test6_ft = ft_printf("ft_printf: testing for 1234 to hex(lowercase): %x\n", 1234);
	test6 = printf("or_printf: testing for 1234 to hex(lowercase): %x\n", 1234);
	return_test(test6_ft, test6);
	test7_ft = ft_printf("ft_printf: testing for 1234 to hex(uppercase): %X\n", 1234);
	test7 = printf("or_printf: testing for 1234 to hex(uppercase): %X\n", 1234);
	return_test(test7_ft, test7);
	test8_ft = ft_printf("ft_printf: testing for pointer address: %p\n", ptr);
	test8 = printf("or_printf: testing for pointer address: %p\n", ptr);
	return_test(test8_ft, test8);
	test9_ft = ft_printf("ft_printf: testing for c c c passing int char int: %c, %c, %c\n", 78, 't', 5);
	test9 = printf("or_printf: testing for c c c passing int char int: %c, %c, %c\n", 78, 't', 5);
	return_test(test9_ft, test9);
	test10_ft = ft_printf("ft_printf: testing for NULL ptr: %s\n", null_ptr);
	test10 = printf("or_printf: testing for NULL ptr: %s\n", null_ptr);
	return_test(test10_ft, test10);
	test11_ft = ft_printf("ft_printf: testing for 2 strings: %s %s\n", "hello", "world");
	test11 = printf("or_printf: testing for 2 strings: %s %s\n", "hello", "world");
	return_test(test11_ft, test11);
	ft_printf("------- End of tests for ft_printf -------\n");
	return (0);
}

static void	return_test(int test_ft, int test)
{
	printf("-- Return value test --\n");
	if (test_ft == test)
		printf("\033[0;32mPassed\033[0m\n");
	else
		printf("\033[0;31mFailed\033[0m\n%i (ft function) should be equal to %i (original function)\n", test_ft, test);
}
