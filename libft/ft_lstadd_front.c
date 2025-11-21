/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <hafhamid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:32:41 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/06 16:32:41 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new -> next = *lst;
		*lst = new;
	}
}
/* 
int main()
{
	t_list * l =  ft_lstnew((void*)42);
	l->content = (void*)42;
	ft_lstadd_front(&l, ft_lstnew((void*)1));

	printf("content = %i\n", l->content == (void*)1);
	printf("next = %i\n", l->next->content == (void *)42);
}
 */