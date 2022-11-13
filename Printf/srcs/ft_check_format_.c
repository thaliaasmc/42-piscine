#include "../include/ft_printf.h"

int	ft_check_format(int c, va_list args)
{
	int	i;
	
	i = 0;
	if (c == 'c')
		i = ft_putchar(va_arg(args, int));
	else if (c == 's')
		i = ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		i = ft_putptr(va_arg(args, unsigned long));
	else if (c == 'd' || c == 'i')
		i = ft_putnbr(va_arg(args, unsigned int));
	else if (c == 'u')
		i = ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'x')
		i = ft_puthexa(va_arg(args, unsigned int), 'x');
	else if (c == 'X')
		i = ft_puthexa(va_arg(args, unsigned int), 'X');
	else if (c == '%')
		i = ft_putchar('%');
	return (i);
}
