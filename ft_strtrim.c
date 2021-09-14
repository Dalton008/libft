/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 20:45:13 by mjammie           #+#    #+#             */
/*   Updated: 2021/04/21 18:03:18 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		len_s1;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len_s1 = ft_strlen(s1);
	while (len_s1 && ft_strchr(set, s1[len_s1]))
		len_s1--;
	result = ft_substr((char *)s1, 0, len_s1 + 1);
	return (result);
}
