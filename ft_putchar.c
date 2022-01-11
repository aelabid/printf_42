#include"ft_printf.h"

void	ft_putchar(char c, int *numbyte)
{
	write(1, &c, 1);
	(*numbyte)++;
}
