#include"ft_printf.h"
#define hexp "0123456789abcdef"

void	ft_puthexa(unsigned long int nb, int *numbyte)
{
	// char	*hex;
	
	// hex = "0123456789abcdef";
	if (nb < 16)
			ft_putchar(hexp[nb], numbyte);
	else
	{
		ft_puthexa(nb / 16, numbyte);
		ft_puthexa(nb % 16, numbyte);
	}
}

void	ft_putpointer(unsigned long int nb, int *numbyte)
{
	ft_putstr("0x", numbyte);
	ft_puthexa(nb, numbyte);
}
