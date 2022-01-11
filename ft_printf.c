#include"ft_printf.h"
// void	ft_putpointer(unsigned long nb, int *numbyte)
// {
// 	ft_putstr("0x", numbyte);
// 	ft_putlhexa(nb, numbyte);
// }
int	ft_printf(const char *str, ...)
{
	int		numbyte;
	va_list	larg;
	int		i;

	i = 0;
	numbyte = 0;
	va_start(larg, str);
	while (str[i])
	{
		while (str[i] != '%' && str[i])
		{
			ft_putchar(str[i], &numbyte);
			i++;
		}
		if (str[i] == '\0')
			break;
 		i++;
		if (str[i] == 'c')
			ft_putchar((char)va_arg(larg, int), &numbyte);
		else if (str[i] == 's')
		{
				ft_putstr((char *)va_arg(larg, char *), &numbyte);
		}
		else if (str[i] == 'p')
			ft_putpointer((unsigned long int)va_arg(larg, unsigned long int), &numbyte);
		else if (str[i] == 'd' || str[i] == 'i')
			ft_putnbr(va_arg(larg, int), &numbyte);
		else if (str[i] == 'u')
			ft_putunbr((unsigned int)va_arg(larg, unsigned int), &numbyte);
		else if (str[i] == 'x')
			ft_putlhexa((unsigned int)va_arg(larg, unsigned int), &numbyte);
		else if (str[i] == 'X')
			ft_putuhexa((unsigned int)va_arg(larg, unsigned int), &numbyte);
		else if (str[i] == '%')
			ft_putchar('%', &numbyte);
		i++;
	}
	return (numbyte);
}
// #include<stdio.h>
// int main()
// {
// 	int a = 100;
// 	char b = 'k';
// 	//printf("%d",printf("%d", -2147483648));
// 	//ft_printf("\n\n%d",ft_printf("%d", -2147483648));
// 	ft_printf("%u", 9223372036854775807LL);
// 	//ft_printf("aa%n", 5000);
// 	// ft_putunbr(5000, &a);
// } 