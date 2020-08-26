/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btennie <btennie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:25:44 by btennie           #+#    #+#             */
/*   Updated: 2019/09/22 15:36:32 by btennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pos;

	pos = (0);
	while (*s)
	{
		if (*s == c)
			pos = (char*)s;
		++s;
	}
	if (pos)
		return (pos);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
