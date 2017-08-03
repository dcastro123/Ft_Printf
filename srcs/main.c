/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 19:04:22 by dcastro-          #+#    #+#             */
/*   Updated: 2017/08/02 17:12:12 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	main(void)
{
	//printf("ok how do i use this %hhd\n", 's');
	//  int b = 1000;
	//  int *y;
	//  y = &b;
	// char c = 'c';
	// char *str = NULL;
	// int x  = 42;
	//printf("'% 4.5ld'\n", x);
//	printf("'%04s", str);
	//ft_printf("'% 4.5i'\n", x);
	// printf("1. real printf test no zero and prec > arg and prec > width:      '%-3i'\n", x);
	// printf("2. real printf test no zero and prec > arg and prec < width:      '%4.3i'\n", x);
	// printf("3. real printf test no zero and prec = arg and prec < width:      '%4.2i'\n", x);
	// printf("4. real printf test no zero and prec < arg and prec < width:      '%4.1i'\n", x);
	// printf("5. real printf test with zero and prec > arg and prec < width:    '%04.5i'\n", x);
	// printf("6. real printf test with zero and prec > arg and prec = width:    '%04.4i'\n", x);
	// printf("7. real printf test with zero and prec > arg and prec < width:    '%04.3i'\n", x);
	// printf("8. real printf test with zero and prec = arg and prec < width:    '%04.2i'\n", x);
	// printf("test with plus: '%+i'\n", x);
	// printf("test with space: '%+d'\n", x);
	// printf("test with space: '%+i'\n", x);
	// printf("test with space: '%+04d'\n", x);
	// printf("------------------------------------------------------------------------\n");
	// printf("------------------------------------------------------------------------\n");
	// printf("------------------------------------------------------------------------\n");
	// printf("------------------------------------------------------------------------\n");
	// printf("------------------------------------------------------------------------\n");
	// ft_printf("my test with plus: '%+i'\n", x);
	// ft_printf("my test with space: '%+d'\n", x);
	// ft_printf("my test with space: '%+i'\n", x);
	// ft_printf("my test with space: '%+04d'\n", x);
	// ft_printf("my ft_printf test no zero and prec > arg and prec > width:     '%-3i'\n", x);
	// ft_printf("my ft_printf test no zero and prec > arg and prec < width:     '%4.3i'\n", x);
	// ft_printf("my ft_printf test no zero and prec = arg and prec < width:     '%4.2i'\n", x);
	// ft_printf("my ft_printf test no zero and prec < arg and prec < width:     '%4.1i'\n", x);
	// ft_printf("my ft_printf test with zero and prec > arg and prec > width:   '%04.5i'\n", x);
	// ft_printf("my ft_printf test with zero and prec > arg and prec = width:   '%04.4i'\n", x);
	// ft_printf("my ft_printf test with zero and prec > arg and prec < width:   '%04.3i'\n", x);
	// ft_printf("my ft_printf test with zero and prec = arg and prec < width:   '%04.2i'\n", x);	
	// printf("|%4.5s|\n", "abc");
	printf("|%s|\n", "Ceci n'est toujours pas un exercice !!");
	printf("|%5.s|\n", "Hello world!");
	printf("|%6.1s|\n", "Hello world!");
	printf("|%.2s|\n", "Hello world!");
	printf("|%.3s|\n", "Hello world!");
	printf("|%.4s|\n", "Hello world!");
	printf("|%.5s|\n", "Hello world!");
	printf("|%.6s|\n", "Hello world!");
	printf("|%.7s|\n", "Hello world!");
	printf("|%.8s|\n", "Hello world!");
	printf("9.|%.9s|\n", "Hello world!");
	printf("|%6.10s|\n", "Hello world!");
	printf("|%-6.11s|\n", "Hello world!");
	printf("|%6.12s|\n", "Hello world!");
	printf("---------------------------\n");
	ft_printf("|%*s|\n", "Ceci n'est toujours pas un exercice !!");
	ft_printf("|%5.s|\n", "Hello world!");
	ft_printf("|%6.1s|\n", "Hello world!");
	ft_printf("|%.2s|\n", "Hello world!");
	ft_printf("|%.3s|\n", "Hello world!");
	ft_printf("|%.4s|\n", "Hello world!");
	ft_printf("|%.5s|\n", "Hello world!");
	ft_printf("|%.6s|\n", "Hello world!");
	ft_printf("|%.7s|\n", "Hello world!");
	ft_printf("|%.8s|\n", "Hello world!");
	ft_printf("9.|%.9s|\n", "Hello world!");
	ft_printf("|%6.10s|\n", "Hello world!");
	ft_printf("|%-6.11s|\n", "Hello world!");
	ft_printf("|%6.12s|\n", "Hello world!");

	return 0;
}
