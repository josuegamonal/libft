/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 09:09:44 by jgamonal          #+#    #+#             */
/*   Updated: 2022/12/16 16:14:28 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_countdigits(long int nb)
{
	long int	cntr;

	cntr = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		cntr++;
	}
	while (nb > 0)
	{
		nb /= 10;
		cntr++;
	}
	return (cntr);
}

char	*ft_nbrisnegative(char *str, int i, long int nbr)
{
	while (nbr <= 0)
	{
		if (i == 0)
		{
			str[0] = '-';
			return (str);
		}
		nbr *= -1;
		while (i > 0)
		{
			str[i] = nbr % 10 + '0';
			nbr /= 10;
			i--;
		}
	}
	return (str);
}

char	*ft_nbrispositive(char *str, int i, long int nbr)
{
	while (nbr > 0)
	{
		while (i >= 0)
		{
			str[i] = nbr % 10 + '0';
			nbr /= 10;
			i--;
		}
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nbr;
	int			i;

	nbr = n;
	i = ft_countdigits(nbr);
	str = malloc (i * sizeof(char) + 1);
	if (!(str))
		return (0);
	str[i--] = '\0';
	if (nbr == 0)
	{
		str[0] = 0 + '0';
		return (str);
	}
	ft_nbrisnegative(str, i, nbr);
	ft_nbrispositive(str, i, nbr);
	return (str);
}
