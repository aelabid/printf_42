#include"ft_printf.h"

void	ft_putnbr(int nb, int *numbyte)
{
	int	i;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		*numbyte += 11;
	}
	else if (nb < 0)
	{
		i = nb * -1;
		ft_putchar('-', numbyte);
		ft_putnbr(i, numbyte);
	}
	else 
		if (nb <= 9)
			ft_putchar(nb + '0', numbyte);
	else
	{
		ft_putnbr(nb / 10, numbyte);
		ft_putnbr(nb % 10, numbyte);
	}
}