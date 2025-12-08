/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:45:33 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/29 13:50:36 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_print_str(char *s, int *count)
{
	if (!s)
		s = "(null)";
	while (*s)
	{
		ft_print_char(*s, count);
		s++;
	}
}

// Handeling %d, %i
void	ft_print_nbr(int n, int *count)
{
	if (n == -2147483648)
	{
		ft_print_str("-2147483648", count);
		return ;
	}
	if (n < 0)
	{
		ft_print_char('-', count);
		n = -n;
	}
	if (n > 9)
		ft_print_nbr(n / 10, count);
	ft_print_char(n % 10 + '0', count);
}

void	ft_print_uint(unsigned int n, int *count)
{
	if (n > 9)
		ft_print_uint(n / 10, count);
	ft_print_char(n % 10 + '0', count);
}
