#include"ft_printf.h"
#define uhex "0123456789ABCDEF"

void	ft_putuhexa(unsigned int nb, int *numbyte)
{
	if (nb < 16)
			ft_putchar(uhex[nb], numbyte);
	else
	{
		ft_putuhexa(nb / 16, numbyte);
		ft_putuhexa(nb % 16, numbyte);
	}
}
