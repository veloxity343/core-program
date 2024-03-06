/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheong <rcheong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:51:15 by rcheong           #+#    #+#             */
/*   Updated: 2024/03/04 11:51:15 by rcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}

/*#include <stdio.h>

int	main(void)
{
	t_list *list = NULL;

	t_list *new_node = ft_lstnew("Node 3", 7);
	ft_lstadd_front(&list, new_node);
	new_node = ft_lstnew("Node 2", 7);
	ft_lstadd_front(&list, new_node);
	new_node = ft_lstnew("Node 1", 7);
	ft_lstadd_front(&list, new_node);

	t_list *current = list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	ft_lstclear(&list, free);
	return (0);
}*/