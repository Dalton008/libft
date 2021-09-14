/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:35:11 by mjammie           #+#    #+#             */
/*   Updated: 2021/04/21 18:02:16 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*n_dst;
	unsigned char	*n_src;
	size_t			i;

	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	n_dst = (unsigned char *)dst;
	n_src = (unsigned char *)src;
	while (i < n)
	{
		n_dst[i] = n_src[i];
		i++;
	}
	return (n_dst);
}
