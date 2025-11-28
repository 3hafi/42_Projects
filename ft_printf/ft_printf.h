#ifndef FT_PRINTF
# define FT_PRINTF

#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *format, ...);
void    ft_handle_format(va_list args, char c, int *count);

// print_list
void    ft_print_char(char c, int *count);
void    ft_print_str(char *s, int *count);
void    ft_print_nbr(int n, int *count);
void    ft_print_uint(unsigned int n, int *count);

// print_hex.c
void    ft_print_hex(unsigned int n, char format, int *count);
void    ft_print_ptr(void *p, int *count);
#endif