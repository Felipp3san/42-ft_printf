/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:24:57 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/25 21:19:08 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include "libft/libft.h"

int		ft_printf(const char *fstring, ...);
size_t	ft_printnbr(int nbr);
void	ft_putnbr_base(int nb, char *base);
size_t	ft_printstr(char *str);
size_t	ft_printchar(char ch);
size_t	ft_printptr(uintptr_t ptr);
size_t	ft_printunbr_base(unsigned int nbr, const char *base);
size_t	ft_nbdigits_base(unsigned long long nbr, size_t base_len);
char	*ft_uitoa_base(unsigned int nbr, const char *base);

#endif
