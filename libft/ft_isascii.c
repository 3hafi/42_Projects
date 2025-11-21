/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <hafhamid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:32:18 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/06 16:32:19 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/* 
#include <stdio.h>
#include <ctype.h>
int	main (void)
{
	printf("myfunc = %i\n", ft_isascii(0));
	printf("orig = %i\n", isascii(0));
	printf("bool = %i\n", 0 >= 0 && 0 <= 127);
}
 */