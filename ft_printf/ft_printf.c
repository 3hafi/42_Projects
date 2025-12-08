/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:33:19 by hafhamid          #+#    #+#             */
/*   Updated: 2025/12/08 10:54:57 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	valid(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X' || c == '%');
}

void	ft_handle_format(va_list args, char c, int *count)
{
	if (c == '%')
		ft_print_char('%', count);
	else if (c == 'c')
		ft_print_char(va_arg(args, int), count);
	else if (c == 's')
		ft_print_str(va_arg(args, char *), count);
	else if (c == 'd' || c == 'i')
		ft_print_nbr(va_arg(args, int), count);
	else if (c == 'u')
		ft_print_uint(va_arg(args, unsigned int), count);
	else if (c == 'x' || c == 'X')
		ft_print_hex(va_arg(args, unsigned int), c, count);
	else if (c == 'p')
		ft_print_ptr(va_arg(args, void *), count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%' && valid(*(format + 1)))
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
	va_end(args);
	return (count);
}
/*
#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

// Helper macro to visually separate tests
#define TEST(name) printf("\n\033[1;33m=== %s ===\033[0m\n", name)

int main(void)
{
    int ret_real, ret_ft;

    printf("\n\033[1;32mSTARTING FINAL STRESS TEST...\033[0m\n");

    // --- 1. BASIC STRINGS ---
    TEST("1. Basic Strings");
    ret_real = printf("Real: %s\n", "Hello World");
    ret_ft   = ft_printf("Mine: %s\n", "Hello World");
    printf("Returns -> Real: %d | Mine: %d\n", ret_real, ret_ft);

    // --- 2. THE NULL STRING ---
    TEST("2. NULL String (%s)");
    // Note: Real printf behaviors vary on NULL %s. 
    // If your output matches (null), you are safe.
    ret_real = printf("Real: %s\n", (char *)NULL);
    ret_ft   = ft_printf("Mine: %s\n", (char *)NULL);
    printf("Returns -> Real: %d | Mine: %d\n", ret_real, ret_ft);

    // --- 3. THE EMBEDDED NULL ---
    // User requested: "Hel\0lo"
    // Behavior: Should stop printing at the first \0.
    TEST("3. Embedded Null (Hel\\0lo)");
    ret_real = printf("Real: %s\n", "Hel\0lo");
    ret_ft   = ft_printf("Mine: %s\n", "Hel\0lo");
    printf("Returns -> Real: %d | Mine: %d\n", ret_real, ret_ft);

    // --- 4. NUMBERS & LIMITS ---
    TEST("4. Integers (INT_MAX, INT_MIN, 0)");
    ret_real = printf("Real: %d, %i, %d\n", INT_MAX, INT_MIN, 0);
    ret_ft   = ft_printf("Mine: %d, %i, %d\n", INT_MAX, INT_MIN, 0);
    printf("Returns -> Real: %d | Mine: %d\n", ret_real, ret_ft);

    // --- 5. UNSIGNED & LIMITS ---
    TEST("5. Unsigned (UINT_MAX, 0)");
    ret_real = printf("Real: %u, %u\n", UINT_MAX, 0);
    ret_ft   = ft_printf("Mine: %u, %u\n", UINT_MAX, 0);
    printf("Returns -> Real: %d | Mine: %d\n", ret_real, ret_ft);

    // --- 6. HEXADECIMAL ---
    TEST("6. Hex (0, 255, UINT_MAX)");
    ret_real = printf("Real: %x, %X, %x\n", 0, 255, UINT_MAX);
    ret_ft   = ft_printf("Mine: %x, %X, %x\n", 0, 255, UINT_MAX);
    printf("Returns -> Real: %d | Mine: %d\n", ret_real, ret_ft);

    // --- 7. POINTERS (AND NULL PTR) ---
    TEST("7. Pointers (&x, NULL)");
    int x = 42;
    // Real printf on Linux prints (nil), Mac prints 0x0. 
    // Your code should match the line above it exactly.
    ret_real = printf("Real: %p, %p\n", &x, NULL);
    ret_ft   = ft_printf("Mine: %p, %p\n", &x, NULL);
    printf("Returns -> Real: %d | Mine: %d\n", ret_real, ret_ft);

    // --- 8. THE PERCENT SIGN ---
    TEST("8. Percent (%%)");
    ret_real = printf("Real: 100%%\n");
    ret_ft   = ft_printf("Mine: 100%%\n");
    printf("Returns -> Real: %d | Mine: %d\n", ret_real, ret_ft);

    // --- 9. THE INVALID FLAG ---
    // Behavior: Should print the characters literally (%k).
    TEST("9. Invalid Flag (%k)");
    ret_real = printf("Real: %k\n");
    ret_ft   = ft_printf("Mine: %k\n");
    printf("Returns -> Real: %d | Mine: %d\n", ret_real, ret_ft);

    // --- 10. MIXED BAG ---
    TEST("10. Mixed Everything");
    ret_real = printf("Real: %c %s %d %x %%\n", 'A', "Word", 42, 42);
    ret_ft   = ft_printf("Mine: %c %s %d %x %%\n", 'A', "Word", 42, 42);
    printf("Returns -> Real: %d | Mine: %d\n", ret_real, ret_ft);

    printf("\n\033[1;32mTEST COMPLETE.\033[0m Check that 'Real' and 'Mine' lines are IDENTICAL.\n");
    return (0);
}*/
