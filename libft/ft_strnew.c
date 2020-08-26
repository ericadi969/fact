/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btennie <btennie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:25:31 by btennie           #+#    #+#             */
/*   Updated: 2019/09/25 09:30:41 by btennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*text;

	if (size + 1 == 0)
		return (NULL);
	text = (char *)malloc((size + 1) * sizeof(char));
	if (!text)
		return (NULL);
	ft_bzero(text, size);
	text[size] = '\0';
	return (text);
}
