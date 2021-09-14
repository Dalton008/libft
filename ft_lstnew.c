/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 21:23:46 by mjammie           #+#    #+#             */
/*   Updated: 2021/04/21 17:09:56 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (struct s_list *)malloc(sizeof(t_list));
	if (list == 0)
		return (0);
	list->content = content;
	list->next = NULL;
	return (list);
}
