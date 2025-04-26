/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:20:38 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/25 19:21:06 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printnbr(int nbr)
{
	char	*str;
	size_t	size;

	str = ft_itoa(nbr);
	size = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (size);
}
