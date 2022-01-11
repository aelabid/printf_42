#include"ft_printf.h"
#define hex "0123456789abcdef"

void	ft_putlhexa(unsigned int nb, int *numbyte)
{
	// char	*hex;
	
	// hex = "0123456789abcdef";
	if (nb < 16)
			ft_putchar(hex[nb], numbyte);
	else
	{
		ft_putlhexa(nb / 16, numbyte);
		ft_putlhexa(nb % 16, numbyte);
	}
}
