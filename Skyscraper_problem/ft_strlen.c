/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <hafhamid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:41:49 by hafhamid          #+#    #+#             */
/*   Updated: 2025/09/09 11:37:08 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_len_to_null(int *ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		i++;
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strlen(""));
	printf("%d\n", ft_strlen("123"));
	printf("%d\n", ft_strlen("1"));
	printf("%d\n", ft_strlen("12345"));
	printf("%d\n", ft_strlen("1234567890"));
}
//*/
