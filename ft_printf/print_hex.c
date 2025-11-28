#include "ft_printf.h"

// Helper for rec
void ft_hex_recursive(unsigned long n, char *base, int *count)
{
    if (n >= 16)
        ft_hex_recursive(n / 16, base, count);
    ft_print_char(base[n % 16], count);
}

// For %x and %X
void ft_print_hex(unsigned int n, char format, int *count)
{
    char    *base;
    if (format == 'x')
        base = "0123456789abcdef";
    else
        base = "0123456789ABCDEF";
    ft_hex_recursive((unsigned long)n, base, count);
}

// %p
void ft_print_ptr(void *p, int *count)
{
    unsigned long   ptr;

    ptr = (unsigned long)p;
    if (!p)
    {
        ft_print_str("0x0", count); // or (nil) / for max/linux +- need to check printf (%p, NULL)
        return;
    }
    ft_print_str("0x", count);
    ft_hex_recursive(ptr, "0123456789abcdef", count);
}