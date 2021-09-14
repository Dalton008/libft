/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 11:57:54 by mjammie           #+#    #+#             */
/*   Updated: 2021/04/23 14:19:45 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	len_str2;
	int		n;

	n = 0;
	len_str2 = ft_strlen(str2);
	if (len_str2 == 0)
		return ((char *)str1);
	while (n < (int)(len - len_str2 + 1))
	{
		if (str1[0] == str2[0] && ft_strncmp(str1, str2, len_str2) == 0)
			return ((char *)str1);
		str1++;
		n++;
	}	
	return (0);
}
