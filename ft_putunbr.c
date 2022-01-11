#include"ft_printf.h"

void	ft_putunbr(unsigned int nb, int *numbyte)
{
	if (nb <= 9)
			ft_putchar(nb + '0', numbyte);
	else
	{
		ft_putunbr(nb / 10, numbyte);
		ft_putunbr(nb % 10, numbyte);
	}
}
