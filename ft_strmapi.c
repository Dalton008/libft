/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:40:41 by mjammie           #+#    #+#             */
/*   Updated: 2021/04/19 18:35:35 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned char	*result;
	int				len;
	int				n;

	n = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	result = malloc(len + 1);
	if (result == 0)
		return (0);
	while (n < len)
	{
		result[n] = f(n, s[n]);
		n++;
	}
	result[len] = 0;
	return ((char *)result);
}
