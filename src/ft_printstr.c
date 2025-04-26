/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:28:15 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/25 19:31:15 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printstr(char *str)
{
	size_t	size;

	if (!str)
		str = "(null)";
	ft_putstr_fd(str, 1);
	size = ft_strlen(str);
	return (size);
}
