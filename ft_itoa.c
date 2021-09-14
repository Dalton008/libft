/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 13:31:26 by mjammie           #+#    #+#             */
/*   Updated: 2021/04/22 18:18:53 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_n(int n)
{
	int	res;

	res = 1;
	if (n < 0)
	{
		n = n * -1;
		res++;
	}
	while (n / 10 > 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = len_n(n);
	result = (char *)malloc(len + 1);
	if (result == 0)
		return (0);
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	result[len--] = '\0';
	while (n / 10 > 0)
	{
		result[len] = 48 + (n % 10);
		n = n / 10;
		len--;
	}
	result[len] = n + 48;
	return (result);
}
