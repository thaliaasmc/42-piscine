#include "../include/ft_printf.h"

int	ft_putnbr(int n)
{
	int	sum;
	int	num;

	num = 0;	
	sum = 0;
	if (n < 0)
	{
		num = ft_putchar('-');
		n *= -1;
		if (n == -2147483648)
		{
			n--;
			sum = 1;
		}
	}
	if (n < 10)
		num = ft_putchar(n + '0' + sum);
	else
	{
		num = ft_putnbr(n /10);
		num = ft_putnbr(n % 10 + sum);

	}
	return (num);
}
