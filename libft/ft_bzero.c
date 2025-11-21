/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <hafhamid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:29:20 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/06 16:29:46 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/* 
#include <stdio.h>
#include <string.h>
int	main (void)
{
	char arr[5];
	bzero(arr, sizeof(arr));
	printf("orig = %s\n", arr);

	ft_bzero(arr, sizeof(arr));
	printf("orig = %s\n", arr);
}
 */
