/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:37:15 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/25 19:40:13 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ptr_hex(uintptr_t ptr, int size)
{
	const char		*base = "0123456789abcdef";
	const size_t	base_size = 16;

	if (ptr >= base_size)
		size = ptr_hex(ptr / base_size, size);
	ft_putnbr_base((int)(ptr % base_size), (char *)base);
	return (size + 1);
}

size_t	ft_printptr(uintptr_t ptr)
{
	size_t	size;

	ft_putstr_fd("0x", 1);
	size = ptr_hex(ptr, 2);
	return (size);
}
