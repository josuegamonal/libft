/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:30:03 by jgamonal          #+#    #+#             */
/*   Updated: 2022/12/16 15:09:27 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_copy_s1(char const *s, char *s1, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			s1[j] = s[i];
			j++;
		}
		i++;
	}
	s1[j] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s1;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	s1 = (char *) malloc(sizeof(char) * (len + 1));
	if (!s1)
		return (NULL);
	ft_copy_s1(s, s1, start, len);
	return (s1);
}
