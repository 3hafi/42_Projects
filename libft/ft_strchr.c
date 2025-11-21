/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <hafhamid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:33:43 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/06 16:33:43 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
/* 
int	main()
{
	char *arr = "abcde";
	char *c = ft_strchr(arr, '\0');
	printf("pointer = %p\n", &arr[5]);
	printf("pointer = %p\n", c);
	printf("char = %c", *c);
}
 */