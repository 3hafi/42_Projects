#include "ft_printf.h"
#include <stdarg.h> // Required for the magic bag
#include <unistd.h>

void ft_handle_format(va_list args, char c, int *count)
{
    if (c == '%')
        ft_print_char('%', count);
    else if (c == 'c')
        ft_print_char(va_arg(args, int), count);
    else if (c == 's')
        ft_print_str(va_arg(args, char *), count); // from here
    else if (c == 'd' || c == 'i')
        ft_print_nbr(va_arg(args, int), count);
    else if (c == 'u')
        ft_print_uint(va_arg(args, unsigned int), count);
    else if (c == 'x' || c == 'X')
        ft_print_hex(va_arg(args, unsigned int), c, count);
    else if (c == 'p')
        ft_print_ptr(va_arg(args, void *), count);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int     count;

    count = 0;
    va_start(args, format); // Initialize the cursor

    while (*format != '\0') 
    {
        if (*format == '%')
        {
            format++;
            if (*format != '\0')
                ft_handle_format(args, *format, &count);
        }
        else
        {
            ft_print_char(*format, &count);
        }
        format++;
    }

    va_end(args); // Clean up
    return (count); // Return number of chars printed
}

#include "ft_printf.h"
#include <stdio.h>

/*
   int ft_printf(const char *format, ...)
   {
   return (0);
   }*/


// #include "ft_printf.h"
// #include <stdio.h>
// #include <limits.h> // For INT_MIN, INT_MAX, etc.

// int main(void)
// {
//     int len_my = 0;
//     int len_real = 0;

//     printf("\n--- TEST START ---\n");

//     // 1. CHARACTERS (%c)
//     printf("\n=== TEST 1: Characters (%%c) ===\n");
//     len_my = ft_printf("My: %c\n", 'A');
//     len_real = printf("Rl: %c\n", 'A');
//     printf("Return -> My: %d, Real: %d\n", len_my, len_real);

//     // 2. STRINGS (%s)
//     printf("\n=== TEST 2: Strings (%%s) ===\n");
//     len_my = ft_printf("My: %s\n", "Hello 42");
//     len_real = printf("Real: %s\n", "Hello 42");
//     printf("Return -> My: %d, Real: %d\n", len_my, len_real);

//     // 2b. NULL STRING (Standard printf might crash, but yours handles it)
//     printf("--- NULL String Test ---\n");
//     len_my = ft_printf("My: %s\n", (char *)NULL);
//     // len_real = printf("Real: %s\n", (char *)NULL); // CAUTION: Might crash on some systems
//     printf("Return -> My: %d\n", len_my);

//     // 3. INTEGERS (%d, %i)
//     printf("\n=== TEST 3: Integers (%%d, %%i) ===\n");
//     len_my = ft_printf("My: %d, %i\n", 42, -42);
//     len_real = printf("Real: %d, %i\n", 42, -42);
//     printf("Return -> My: %d, Real: %d\n", len_my, len_real);

//     // 3b. INT EDGE CASES
//     printf("--- Edge Cases (0, INT_MIN) ---\n");
//     len_my = ft_printf("My: %d, %d\n", 0, -2147483648);
//     len_real = printf("Real: %d, %ld\n", 0, -2147483648); // Using %ld for literal to avoid warnings
//     printf("Return -> My: %d, Real: %d\n", len_my, len_real);

//     // 4. UNSIGNED (%u)
//     printf("\n=== TEST 4: Unsigned (%%u) ===\n");
//     len_my = ft_printf("My: %u\n", 4294967295U);
//     len_real = printf("Real: %u\n", 4294967295U);
//     printf("Return -> My: %d, Real: %d\n", len_my, len_real);

//     // 5. HEXADECIMAL (%x, %X)
//     printf("\n=== TEST 5: Hexadecimal (%%x, %%X) ===\n");
//     len_my = ft_printf("My: %x, %X\n", 255, 255);
//     len_real = printf("Real: %x, %X\n", 255, 255);
//     printf("Return -> My: %d, Real: %d\n", len_my, len_real);

//     // 6. POINTERS (%p)
//     printf("\n=== TEST 6: Pointers (%%p) ===\n");
//     int a = 42;
//     len_my = ft_printf("My: %p\n", &a);
//     len_real = printf("Real: %p\n", &a);
//     printf("Return -> My: %d, Real: %d\n", len_my, len_real);
    
//     // 6b. NULL POINTER
//     printf("--- NULL Pointer ---\n");
//     len_my = ft_printf("My: %p\n", NULL);
//     len_real = printf("Real: %p\n", NULL);
//     printf("Return -> My: %d, Real: %d\n", len_my, len_real);

//     // 7. PERCENT (%%)
//     printf("\n=== TEST 7: Percent (%%%%) ===\n");
//     len_my = ft_printf("My: 100%%\n");
//     len_real = printf("Real: 100%%\n");
//     printf("Return -> My: %d, Real: %d\n", len_my, len_real);

//     return (0);
// }
