/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:06:39 by mjammie           #+#    #+#             */
/*   Updated: 2021/04/20 14:03:00 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		str_len;

	str_len = ft_strlen(str);
	if ((char)c == '\0')
		return ((char *)str + str_len);
	while (str_len--)
		if (*(str + str_len) == c)
			return ((char *)str + str_len);
	return (0);
}
