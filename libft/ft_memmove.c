/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btennie <btennie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:43:39 by btennie           #+#    #+#             */
/*   Updated: 2019/09/22 15:23:19 by btennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned char		*s;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (s == d)
		return (dst);
	if (s < d)
	{
		s = (unsigned char*)src + len - 1;
		d = dst + len - 1;
		while (len--)
			*d-- = *s--;
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
