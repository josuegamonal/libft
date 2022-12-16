/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:35:55 by jgamonal          #+#    #+#             */
/*   Updated: 2022/12/16 17:40:03 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int				i;
	int				b;
	unsigned int	c;

	i = 0;
	b = 1;
	c = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			b *= -1;
		if (((str[i] == '-') || (str[i] == '+'))
			&& ((str[i + 1] == '-') || (str[i + 1] == '+')))
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		c = (str[i] - '0') + (c * 10);
		if (c > 2147483647 && b == 1)
			return (-1);
		if (c > 2147483648 && b == -1)
			return (0);
		i++;
	}
	return ((int)(b * c));
}
