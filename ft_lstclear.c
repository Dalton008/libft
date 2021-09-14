/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:24:54 by mjammie           #+#    #+#             */
/*   Updated: 2021/04/22 16:45:30 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*new;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		new = *lst;
		*lst = new->next;
		free(new);
	}
	*lst = 0;
}
