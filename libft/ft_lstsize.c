/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <hafhamid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:33:02 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/06 16:33:02 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}
/* 
#include <stdio.h>
int main()
{
	t_list * l =  NULL;
	printf("size = %i\n", ft_lstsize(l));

	ft_lstadd_front(&l, ft_lstnew((void*)1));
	printf("size = %i\n", ft_lstsize(l));

	ft_lstadd_front(&l, ft_lstnew((void*)2));
	printf("size = %i\n", ft_lstsize(l));
}
 */