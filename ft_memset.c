/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 21:33:37 by mjammie           #+#    #+#             */
/*   Updated: 2021/04/19 18:45:34 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int value, size_t n)
{
	size_t			i;
	unsigned char	*n_dst;

	i = 0;
	n_dst = (unsigned char *)dst;
	while (i < n)
	{
		n_dst[i] = value;
		i++;
	}
	return (n_dst);
}
