/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <hafhamid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:33:31 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/06 16:36:04 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;

	i = n;
	if (i == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (i < 0)
	{
		ft_putchar_fd('-', fd);
		i *= -1;
		ft_putnbr_fd(i, fd);
	}
	else if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putnbr_fd(i % 10, fd);
	}
	else
		ft_putchar_fd(i + '0', fd);
}

/* 
int main()
{
	ft_putnbr_fd(-987441, 1);
}
 */