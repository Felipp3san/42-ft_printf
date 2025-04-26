/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:56:00 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/25 13:15:21 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * %c - char
 * %s - string
 * %p - pointer (printed in hex)
 * %d - decimal (base 10)
 * %i - integer (base 10)
 * %u - unsigned decimal (base 10)
 * %x - number in hex (base 16 - lowercase)
 * %X - number in hex (base 16 - uppercase)
 * %% - percent sign
*/

static int	printf_format(va_list	*va, char ch)
{
	const char	*base10 = "0123456789";
	const char	*base16 = "0123456789abcdef";
	const char	*base16u = "0123456789ABCDEF";

	if (ch == 'c')
		return (ft_printchar((char)va_arg(*va, int)));
	else if (ch == 'd' || ch == 'i')
		return (ft_printnbr(va_arg(*va, int)));
	else if (ch == 'u')
		return (ft_printunbr_base(va_arg(*va, unsigned int), base10));
	else if (ch == 'p')
		return (ft_printptr((uintptr_t) va_arg(*va, void *)));
	else if (ch == 's')
		return (ft_printstr(va_arg(*va, char *)));
	else if (ch == 'x')
		return (ft_printunbr_base(va_arg(*va, unsigned int), base16));
	else if (ch == 'X')
		return (ft_printunbr_base(va_arg(*va, unsigned int), base16u));
	else
		return (ft_printchar(ch));
}

int	ft_printf(const char *fstring, ...)
{
	va_list	va;
	size_t	ch_count;

	ch_count = 0;
	va_start(va, fstring);
	while (*fstring)
	{
		if (*fstring == '%')
			ch_count += printf_format(&va, *++fstring);
		else
		{
			ft_putchar_fd(*fstring, 1);
			ch_count++;
		}
		fstring++;
	}
	va_end(va);
	return (ch_count);
}
