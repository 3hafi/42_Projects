/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <hafhamid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:33:10 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/06 16:36:16 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
/* 
#include <stdio.h>
#include <string.h>
int	main (void)
{
	char arr[5];
	const char *s = "aaa";
	memcpy(arr, s, sizeof(arr));
	printf("orig = %s\n", arr);

	ft_memcpy(arr, s, sizeof(arr));
	printf("myfunc = %s\n", arr);
}
 */