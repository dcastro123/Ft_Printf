/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 19:04:22 by dcastro-          #+#    #+#             */
/*   Updated: 2017/05/02 19:30:45 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	main(void)
{
	//printf("ok how do i use this %hhd\n", 's');
	// int b = 1000;
	// int *y;
	// y = &b;
	char *str = "hello";
	//ft_printf("test>>> %s     %c\n", "hello", 'c');
	//printf ("<%-d> only -d to see the difference\n", x);
    //printf ("<%5d> is right-justified.\n", x);
    //printf ("<%-+5d> The minus sign makes it left-justified.\n", x);
    // printf ("%-s only -s expected output\n", str);
    // ft_printf ("%-s only -s my printf output\n", str);
    printf("'%-10s' -s and width expected output\n", str);
    ft_printf("'%-10s'\n", str);
	//printf("real printf >>>>%+04d<<<<\n", 42);
	//ft_printf("my printf >>>>%+04d<<<<\n", 42);
    // printf(">>>>>>>>%d<<<<<<< >>>>>>>>>>>%s<<<<<<<< >>>>>>%p<<<<< real printf\n", b, str, y);
    // ft_printf(">>>>>%d<<<<<<<<<< >>>>>>>>%s<<<<<<<<<>>>>>>%p<<<<<< p my printf\n", b, str, y);
  //  printf("'% 011d' expected output\n", 10);
   // ft_printf("'% 011d' my output\n", 10);
    //printf ("'%10.3s' the output should be hel\n", str);
	// int	*a;
	// int	b = 10;
	// size_t	c;

	// a = &b;
	// c = (size_t)a;
	// int	number = 10;
	// char *pointer = "little";
	// printf(" %-10d \n", number);
	// printf(" %-#10x \n", number);
	// printf("Here is a number-%- 4d-and a-%-10s-word.\n", number, pointer);
	// printf("Here is a number-%4d-and a-%10s-word.\n", number, pointer);
	// printf("Here is a number-%d-and a-%s-word.\n", number, pointer);
	// printf("Here is a number-%- d-and a-%-s-word.\n", number, pointer);
	// printf("%zd\n", c);
	// printf("%#zx\n", c);
	// printf("%p\n", a);
	// printf("%d\n", b);
	// ft_printf("%p", a);
	return 0;
}
