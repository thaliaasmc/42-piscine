#include "../include/ft_printf.h"

int	ft_puthexa(unsigned int n, char c)
{
	char	*base_hexa;
	int	num_hexa;

	num_hexa = 0;
	if (c == 'x')
		base_hexa = "0123456789abcdef";
	else
		base_hexa = "0123456789ABCDEF";
	if (n < 16)
		return (ft_putchar(base_hexa[n]));
	num_hexa += ft_puthexa (n / 16, c);
	num_hexa += ft_putchar (base_hexa[n % 16]);
	return (num_hexa);
}
