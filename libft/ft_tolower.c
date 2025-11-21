/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <hafhamid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:36:47 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/06 16:36:48 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 90 && c >= 65)
		return (c + 32);
	else
		return (c);
}
/* 
#include <stdio.h>
#include <ctype.h>
int	main (void)
{
	char s = 'A';
	printf("orig = %c\n", ft_tolower(s));
	printf("orig = %c", tolower(s));
}
 */