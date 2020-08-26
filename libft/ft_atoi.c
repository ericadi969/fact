/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btennie <btennie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:02:42 by btennie           #+#    #+#             */
/*   Updated: 2019/09/21 14:59:40 by btennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_spacing(const char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	return (i);
}

int				ft_atoi(const char *str)
{
	int i;
	int minus;
	int number;

	number = 0;
	i = ft_spacing(str);
	if (i < 0)
		return (0);
	minus = 1;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (number < 0 && minus == 1)
			return (-1);
		else if (number < 0 && minus == -1)
			return (0);
		number = number * 10 + str[i] - '0';
		i++;
	}
	number = number * minus;
	return (number);
}
