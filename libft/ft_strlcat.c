/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btennie <btennie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:24:43 by btennie           #+#    #+#             */
/*   Updated: 2019/09/22 15:33:38 by btennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*ptr;
	const char	*prs;
	size_t		n;
	size_t		len;

	ptr = dest;
	prs = src;
	n = size;
	while (*ptr != '\0' && n-- != 0)
		ptr++;
	len = ptr - dest;
	n = size - len;
	if (n == 0)
		return (len + ft_strlen(src));
	while (*prs != '\0')
	{
		if (n != 1)
		{
			*ptr++ = *prs;
			n--;
		}
		prs++;
	}
	*ptr = '\0';
	return (len + (prs - src));
}
