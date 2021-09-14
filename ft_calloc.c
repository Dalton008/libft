/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 11:36:16 by mjammie           #+#    #+#             */
/*   Updated: 2021/04/22 18:06:08 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t val, size_t size)
{
	unsigned char	*dst;

	dst = malloc(val * size);
	if (dst == 0)
		return (0);
	if (dst != '\0' && (val * size) != '\0')
		ft_bzero(dst, val * size);
	return (dst);
}
