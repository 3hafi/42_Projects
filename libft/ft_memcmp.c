/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <hafhamid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:33:08 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/06 16:36:15 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr1 < *ptr2)
			return (-1);
		else if (*ptr1 > *ptr2)
			return (1);
		ptr1++;
		ptr2++;
	}
	return (0);
}
/* 
int	main(void)
{
	char *arr1 = "12345";
	char *arr2 = "12346";

	printf("original = %d\n", memcmp(arr1, arr2, 5));
	printf("myfunc = %d\n", ft_memcmp(arr1, arr2, 5));
}
 */