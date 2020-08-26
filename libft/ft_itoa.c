/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btennie <btennie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 15:21:43 by btennie           #+#    #+#             */
/*   Updated: 2019/09/22 15:27:31 by btennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_str_len(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	i;

	len = get_str_len(n);
	i = n;
	if (n < 0)
	{
		i = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = i % 10 + '0';
	while (i /= 10)
		str[--len] = i % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
