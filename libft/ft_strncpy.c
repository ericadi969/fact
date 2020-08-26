/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btennie <btennie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:43:34 by btennie           #+#    #+#             */
/*   Updated: 2019/09/25 11:16:24 by btennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*str;

	str = dst;
	while (*src != '\0' && len > 0)
	{
		*str++ = *src++;
		len--;
	}
	while (len > 0)
	{
		*str++ = '\0';
		len--;
	}
	return (dst);
}
