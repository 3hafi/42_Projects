/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <hafhamid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:32:27 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/06 16:32:28 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (c);
	return (0);
}
/* 
#include <stdio.h>
#include <ctype.h>
int	main (void)
{
	printf("orig = %i\n", ft_isdigit('1'));
	printf("orig = %i", isdigit('1'));
}
 */