/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:30:36 by mjammie           #+#    #+#             */
/*   Updated: 2021/04/23 13:53:37 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memptr, int val, size_t num)
{
	size_t			n;
	unsigned char	*n_mem;

	n = 0;
	n_mem = (unsigned char *)memptr;
	while (n < num)
	{
		if (n_mem[n] == (unsigned char)val)
			return (n_mem + n);
		n++;
	}
	return (0);
}
