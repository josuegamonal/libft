/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:31:55 by jgamonal          #+#    #+#             */
/*   Updated: 2022/10/15 10:25:04 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1copy;
	int		i;

	i = 0;
	s1copy = (char *) malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!(s1copy))
		return (NULL);
	while (*s1)
	{
		s1copy[i++] = *s1++;
	}
	s1copy[i] = '\0';
	return (s1copy);
}
