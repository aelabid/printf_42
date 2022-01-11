#include "ft_printf.h"

void	ft_putstr(char *c, int *numbyte)
{
	int	i;

	if (!c)
	{
		write(1, "(null)", 6);
		*numbyte += 6;
		return ;
	}
	i = 0;
	while (c[i])
	{
		ft_putchar(c[i], numbyte);
		i++;
	}
}
