/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:44:44 by mjammie           #+#    #+#             */
/*   Updated: 2021/04/19 23:37:33 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		n;

	n = 0;
	while (str[n])
	{
		if (str[n] == c)
			return ((char *)str + n);
		n++;
	}
	if (c == 0)
		return ((char *)str + n);
	return (0);
}
