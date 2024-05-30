/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:52:04 by rohoffma          #+#    #+#             */
/*   Updated: 2024/05/30 18:11:32 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libftprintf.h"

int	main(void)
{
	printf("------- Testing ft_printf -------");
	ft_printf("ft_printf: testing for char 't': %c\n", 't');
	printf("printf: output for char 't': %c\n", 't');
	ft_printf("ft_printf: testing for int '4107': %d\n", 4107);
	printf("printf: output for int '4107': %d\n", 4107);
	printf("------- End of tests for ft_printf -------");
	return (0);
}
