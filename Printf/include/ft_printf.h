/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <tsampaio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:39:50 by tsampaio          #+#    #+#             */
/*   Updated: 2022/11/25 22:39:51 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putptr(unsigned long ptr);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_puthexa(unsigned int n, char c);
int	ft_check_format(int c, va_list args);
int	ft_printf(const char *str, ...);

#endif
