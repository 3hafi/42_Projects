/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <hafhamid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:36:50 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/06 16:36:51 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c <= 122 && c >= 97)
		return (c - 32);
	else
		return (c);
}
/* 
#include <stdio.h>
#include <ctype.h>
int	main (void)
{
	char s = 'a';
	printf("myfunc = %c\n", ft_toupper(s));
	printf("orig = %c", toupper(s));
}
 */
