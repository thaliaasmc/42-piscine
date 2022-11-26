#include "../include/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list args;
	int	str_size;
	int	i;
	
	if (!str)
		return (-1);
	str_size = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			str_size += ft_check_format(str[i], args);
		}
		else
		{
			str_size++;
			ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (str_size);
}
