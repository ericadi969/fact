/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btennie <btennie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:29:53 by btennie           #+#    #+#             */
/*   Updated: 2019/09/21 15:46:29 by btennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	if (!n || dst == src)
		return (dst);
	while (n-- > 0)
		*(ptr++) = *(ptr2++);
	return (dst);
}
