#include "../include/ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	num;
	
	num = 0;
	if (n >= 10)
		num += ft_putunbr(n / 10);
	num += ft_putchar(n % 10 + '0');
	return (num);
}
