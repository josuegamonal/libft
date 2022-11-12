/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:48:25 by jgamonal          #+#    #+#             */
/*   Updated: 2022/11/05 12:18:21 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))

{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f (i, s + i);
		i++;
	}
}
