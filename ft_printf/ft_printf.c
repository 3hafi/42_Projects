#include "ft_printf.h"
#include <stdarg.h> // Required for the magic bag

int ft_printf(const char *format, ...)
{
    va_list args;
    int     count;

    count = 0;
    va_start(args, format); // Initialize the curso
    va_end(args); // Clean up
    return (count); // Return number of chars printed
}
