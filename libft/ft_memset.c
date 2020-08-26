/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btennie <btennie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:06:50 by btennie           #+#    #+#             */
/*   Updated: 2019/09/15 10:43:07 by btennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void		*ft_memset(void *nbr, int value, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char*)nbr;
	while (n-- > 0)
		*(ptr++) = (unsigned char)value;
	return (nbr);
}
