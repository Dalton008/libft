/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 17:00:20 by mjammie           #+#    #+#             */
/*   Updated: 2021/04/21 18:07:39 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;

	n = 0;
	if (!dst || !src)
		return (0);
	if (size > 0)
	{
		while (n < (size - 1) && src[n] != 0)
		{
			dst[n] = src[n];
			n++;
		}
		dst[n] = '\0';
	}
	while (src[n] != 0)
		n++;
	return (n);
}
