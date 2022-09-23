/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:17:04 by jgamonal          #+#    #+#             */
/*   Updated: 2022/09/23 16:05:09 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>

void	ft_bzero(void	*s, size_t	n)
{
	char	*s_char;
	unsigned int	i;

	i = 0;
	s_char = (char *)s;
	while (i < n)
	{
		s_char[i] = '\0';
		i++;
	}
}
