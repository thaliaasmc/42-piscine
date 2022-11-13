#include "../include/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list args;
	int	str_size;
	
	if (!str)
		return (-1);
	str_size = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			str_size = ft_check_format(*str, args);
		}
		else
		{
			str_size++;
			ft_putchar(*str);
		}
		str++;
	}
	va_end(args);
	return (str_size);
}
