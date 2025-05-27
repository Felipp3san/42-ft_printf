/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:31:25 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/25 22:32:14 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *fstring, ...);
void	ft_putnbr_base(int nb, char *base);
size_t	ft_printnbr(int nbr);
size_t	ft_printstr(char *str);
size_t	ft_printchar(char ch);
size_t	ft_printptr(uintptr_t ptr);
size_t	ft_printunbr_base(unsigned int nbr, const char *base);
size_t	ft_nbdigits_base(unsigned long long nbr, size_t base_len);
char	*ft_uitoa_base(unsigned int nbr, const char *base);

// Libft files

size_t	ft_strlen(const char *str);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
char	*ft_itoa(int n);

#endif
