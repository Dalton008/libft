/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:12:37 by mjammie           #+#    #+#             */
/*   Updated: 2021/04/21 18:06:29 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	unsigned long	n;
	unsigned char	*n_buf1;
	unsigned char	*n_buf2;

	n_buf1 = (unsigned char *)buf1;
	n_buf2 = (unsigned char *)buf2;
	n = 0;
	if (count == 0)
		return (0);
	while (n < count)
	{
		if (n_buf1[n] != n_buf2[n])
			return (n_buf1[n] - n_buf2[n]);
		n++;
	}
	return (0);
}
