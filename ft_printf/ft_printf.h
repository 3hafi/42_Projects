/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:54:04 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/29 14:06:44 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_handle_format(va_list args, char c, int *count);
void	ft_print_char(char c, int *count);
void	ft_print_str(char *s, int *count);
void	ft_print_nbr(int n, int *count);
void	ft_print_uint(unsigned int n, int *count);
void	ft_print_hex(unsigned int n, char format, int *count);
void	ft_print_ptr(void *p, int *count);

#endif
