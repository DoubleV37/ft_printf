#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
int		ft_putchar(char c);
int		ft_putstr(char *s);
void	ft_putnbr(int n, int *size);
int		ft_putunsignednbr(unsigned int n);
void	print_recursive(size_t nbr, char *base, size_t base_size, int *size);
int		ft_putnbr_base(unsigned long nbr, char *base);
int		ft_print_pointer(void *address);
int		ft_print_content(const char c, va_list args);
int		ft_printf(const char *content, ...);

#endif
