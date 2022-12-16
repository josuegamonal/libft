/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 08:36:34 by jgamonal          #+#    #+#             */
/*   Updated: 2022/12/16 15:05:17 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_copy_all(char const *s1, char const *s2, char *s3)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (s2[i])
	{
		s3[j] = s2[i];
		i++;
		j++;
	}
	s3[j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		len;

	if (!(s1) || !(s2))
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *) malloc(sizeof(char) * (len + 1));
	if (!(s3))
		return (NULL);
	ft_copy_all(s1, s2, s3);
	return (s3);
}
