/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btennie <btennie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:22:13 by btennie           #+#    #+#             */
/*   Updated: 2019/09/25 10:21:58 by btennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	size_t			len;
	unsigned int	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2));
	if (len + 1 == 0)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (*s1 != '\0')
		str[i++] = *s1++;
	while (*s2 != '\0')
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}
