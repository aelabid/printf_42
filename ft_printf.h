#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<stdarg.h>
# include<unistd.h>

void	ft_putchar(char c, int *numbyte);
void	ft_putstr(char *c, int *numbyte);
void	ft_putnbr(int nb, int *numbyte);
void	ft_putunbr(unsigned int nb, int *numbyte);
void	ft_putlhexa(unsigned int nb, int *numbyte);
void	ft_putuhexa(unsigned int nb, int *numbyte);
void	ft_putpointer(unsigned long int nb, int *numbyte);
int	    ft_printf(const char *str, ...);

#endif