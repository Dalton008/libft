/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 10:42:25 by mjammie           #+#    #+#             */
/*   Updated: 2021/04/20 13:44:15 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*n_dst;
	unsigned char	*n_src;
	unsigned char	ch;
	size_t			i;

	n_dst = (unsigned char *)dst;
	n_src = (unsigned char *)src;
	i = 0;
	ch = (char)c;
	while (i < n)
	{
		n_dst[i] = n_src[i];
		if (n_dst[i] == ch)
			return (n_dst + i + 1);
		i++;
	}
	return (0);
}
