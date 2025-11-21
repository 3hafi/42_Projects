/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <hafhamid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:36:35 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/06 16:36:35 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) + 1;
	while (*s)
		s++;
	if (c == '\0' && *s == '\0')
		return ((char *)s);
	while (i > 0)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s--;
		i--;
	}
	return (NULL);
}
/* 
int	main()
{
	char *arr = "abcdea";
	char *c = ft_strrchr(arr, 'a');
	printf("pointer = %p\n", &arr[5]);
	printf("pointer = %p\n", c);
	printf("char = %c", *c);
}
 */