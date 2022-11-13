#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putptr(unsigned long ptr);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_puthexa(unsigned int n, char c);
int	ft_check_format(int c, va_list args);
int	ft_printf(const char *str, ...);

#endif
