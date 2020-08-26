/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btennie <btennie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:35:33 by btennie           #+#    #+#             */
/*   Updated: 2019/09/22 15:22:44 by btennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		ptr[i] = ptr2[i];
		if (ptr[i] == (unsigned char)c)
			return ((void*)(dst + i + 1));
		i++;
	}
	return (NULL);
}
