/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:30:03 by jgamonal          #+#    #+#             */
/*   Updated: 2022/10/15 11:58:10 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s1;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	s1 = (char *) malloc(sizeof(*s) * (len + 1));
	if (!(s1))
		return (NULL);
	while (s1[i])
	{
		if (i >= start && j < len)
		{
			s1[j] = s[i];
			j++;
		}
		i++;
	}
	s1[j] = '\0';
	return (s1);
}
