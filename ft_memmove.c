/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:05:36 by mjammie           #+#    #+#             */
/*   Updated: 2021/04/21 18:07:21 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*n_dst;
	char	*n_src;
	size_t	i;

	n_dst = (char *)dst;
	n_src = (char *)src;
	i = 0;
	if (n_dst < n_src)
	{
		while (i < n)
		{
			n_dst[i] = n_src[i];
			i++;
		}
		return (n_dst);
	}
	else if (n_dst > n_src)
	{
		while (n--)
		{
			n_dst[n] = n_src[n];
		}
	}
	return (n_dst);
}
