/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <hafhamid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:32:51 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/06 16:32:51 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

/* 
int main()
{
	t_list * l =  NULL;
	ft_lstadd_back(&l, ft_lstnew((void*)1));
	ft_lstadd_back(&l, ft_lstnew((void*)2));

	printf("is_last = %i\n", ft_lstlast(l)->content == (void*)2);
	printf("is_last = %i\n", ft_lstlast(l)->next == 0);
}
 */