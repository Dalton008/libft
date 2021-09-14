/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 17:35:18 by mjammie           #+#    #+#             */
/*   Updated: 2021/04/20 17:12:47 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	size_dest;

	n = 0;
	size_dest = 0;
	while (dst[size_dest] && size_dest < size)
		size_dest++;
	while (src[n] && (size_dest + n + 1) < size)
	{
		dst[size_dest + n] = src[n];
		n++;
	}
	if (size_dest < size)
		dst[size_dest + n] = '\0';
	return (ft_strlen(src) + size_dest);
}
