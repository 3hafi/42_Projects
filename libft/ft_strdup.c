/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <hafhamid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:33:49 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/06 16:34:38 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		len;
	int		i;

	len = 0;
	while (src && src[len] != '\0')
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL || src == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 
#include <string.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	char *c;
	char *dup;
	char *orig;

	c = argv[1];
	printf("original string = %s, %p, %i\n", c, c, argc);
	dup = ft_strdup(c);
	printf("dupliced string = %s, %p.\n", dup, dup);
	orig = strdup(c);
	printf("original func   = %s, %p.\n", orig, orig);
	return (0);
}
 */