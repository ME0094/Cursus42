/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:06:39 by martirod          #+#    #+#             */
/*   Updated: 2024/08/01 18:48:26 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies the function `f` to each element of the linked list `lst` and creates
 * a new list with the results. The `del` function is used to delete the content
 * of an element if needed.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	if (!lst || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_elem = ft_lstnew((f)(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&new_lst, free);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}
