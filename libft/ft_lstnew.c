/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <hafhamid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:32:56 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/06 16:32:56 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}
/* 
int main()
{
	t_list * l =  ft_lstnew((void*)42);
	l->content = (void*)42;
	printf("content = %i\n", l->content == (void*)42);
	printf("next = %i\n", l->next == 0);
}
 */