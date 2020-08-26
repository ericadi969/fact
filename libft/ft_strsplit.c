/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btennie <btennie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 18:18:11 by btennie           #+#    #+#             */
/*   Updated: 2019/09/26 17:20:48 by btennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char		**free_memory(char **s, int i)
{
	char	**res;
	int		j;

	res = s;
	j = i;
	while (j >= 0)
		free(res);
	free(s);
	return (NULL);
}

static int		count_words(char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (*s)
	{
		if (word == 0 && *s != c)
		{
			word = 1;
			i++;
		}
		else if (word == 1 && *s == c)
			word = 0;
		s++;
	}
	return (i);
}

static int		ft_len(char *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		nb_ofwords;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	nb_ofwords = count_words((char *)s, c);
	tab = (char **)malloc((nb_ofwords + 1) * sizeof(char*));
	i = 0;
	if (!tab)
		return (NULL);
	while (nb_ofwords--)
	{
		while (*s == c && *s != '\0')
			s++;
		if (!(tab[i] = ft_strsub((char *)s, 0, ft_len((char *)s, c))))
			return (free_memory(tab, i));
		i++;
		s = s + ft_len((char *)s, c);
	}
	tab[i] = NULL;
	return (tab);
}
