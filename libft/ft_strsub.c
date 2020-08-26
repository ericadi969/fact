/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btennie <btennie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:26:03 by btennie           #+#    #+#             */
/*   Updated: 2019/09/25 09:30:38 by btennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	int		i;

	if (!s)
		return (NULL);
	if (len + 1 == 0)
		return (NULL);
	if (!(fresh = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	if (!fresh)
		return (NULL);
	fresh[len] = '\0';
	while (len--)
	{
		fresh[i] = s[start];
		i++;
		start++;
	}
	return (fresh);
}
