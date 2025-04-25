/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:12:35 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/25 13:13:31 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	char	str[] = "Pointer Test";
	int		count;

	// Without arguments
	count = printf("printf without arguments\n");
	printf("Original count: %d\n", count);
	count = ft_printf("printf without arguments\n");
	printf("Custom count: %d\n", count);
	printf("===============================\n");

	// Char / String
	count = printf("Char: %c, String: %s\n", 'C', "String test");
	printf("Original count: %d\n", count);
	count = ft_printf("Char: %c, String: %s\n", 'C', "String test");
	printf("Custom count: %d\n", count);
	printf("===============================\n");

	// Unsigned integer
	count = printf("Uinteger: %u\n", 4294967295u);
	printf("Original count: %d\n", count);
	count = ft_printf("Uinteger: %u\n", 4294967295u);
	printf("Custom count: %d\n", count);
	printf("===============================\n");

	count = printf("Uinteger: %u\n", 0);
	printf("Original count: %d\n", count);
	count = ft_printf("Uinteger: %u\n", 0);
	printf("Custom count: %d\n", count);
	printf("===============================\n");

	// Decimal / Integer
	count = printf("Decimal: %d - Integer: %i\n", 2, 1234);
	printf("Original count: %d\n", count);
	count = ft_printf("Decimal: %d - Integer: %i\n", 2, 1234);
	printf("Custom count: %d\n", count);
	printf("===============================\n");

	count = printf("Decimal(Hex): %d - Integer(Hex): %i\n", 0xA, 0xA);
	printf("Original count: %d\n", count);
	count = ft_printf("Decimal(Hex): %d - Integer(Hex): %i\n", 0xA, 0xA);
	printf("Custom count: %d\n", count);
	printf("===============================\n");

	count = printf("Int max: %d - Int min: %d\n", 2147483647, -2147483647 - 1);
	printf("Original count: %d\n", count);
	count = ft_printf("Int max: %d - Int min: %d\n", 2147483647, -2147483647 - 1);
	printf("Custom count: %d\n", count);
	printf("===============================\n");

	// Pointer
	count = printf("Pointer: %p\n", str);
	printf("Original count: %d\n", count);
	count = ft_printf("Pointer: %p\n", str);
	printf("Custom count: %d\n", count);
	printf("===============================\n");

	count = printf("Pointer: %p\n", &str);
	printf("Original count: %d\n", count);
	count = ft_printf("Pointer: %p\n", &str);
	printf("Custom count: %d\n", count);
	printf("===============================\n");

	// Percentage
	count = printf("Percentage: %%\n");
	printf("Original count: %d\n", count);
	count = ft_printf("Percentage: %%\n");
	printf("Custom count: %d\n", count);
	printf("===============================\n");

	// Hex lowercase / Hex uppercase
	count = printf("x(hex): %x x(dec): %x\n", 0xA, 10);
	printf("Original count: %d\n", count);
	count = ft_printf("x(hex): %x x(dec): %x\n", 0xA, 10);
	printf("Custom count: %d\n", count);
	printf("===============================\n");

	count = printf("X(hex): %X X(dec): %X\n", 0xA, 10);
	printf("Original count: %d\n", count);
	count = ft_printf("X(hex): %X X(dec): %X\n", 0xA, 10);
	printf("Custom count: %d\n", count);
	printf("===============================\n");

	count = printf("X(dec): %X\n", 4294967295u);
	printf("Original count: %d\n", count);
	count = ft_printf("X(dec): %X\n", 4294967295u);
	printf("Custom count: %d\n", count);
	printf("===============================\n");

	return (0);
}
