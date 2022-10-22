/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 09:53:08 by jgamonal          #+#    #+#             */
/*   Updated: 2022/10/22 13:30:23 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_start(char *s1, char *set)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == set[i])
		{
			i++;
		}
		else
			return (i);
	}
	return (i);
}

int	ft_final(char *s1, char *set)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (s1[j] != '\0')
		j++;
	while (s1[i] != '\0')
	{
		if (s1[j - 1] == set[i])
		{
		i++;
		j--;
		}
		else
			return (j);
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	char	*ps1;
	char	*pset;
	int		start;
	int		final;
	int		i;

	ps1 = (char *)s1;
	pset= (char *)set;
	start = ft_start(ps1, pset);
	final = ft_final(ps1, pset);
	result = (char *) malloc(sizeof(char) * ((final + 1) - start));
	if (!(result)) 
		return (NULL);
	i = 0;
	while (start < final)
	{
		result[i] = ps1[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}
	