/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josue <josue@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 09:53:08 by jgamonal          #+#    #+#             */
/*   Updated: 2022/11/18 17:29:52 by josue            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

int	ft_start(char *s1, char *set)
{
	int	i;
	int	j;
	i = 0;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			i++;
			j++;
		}
		if (s1[i] != set[j])
		{
			j++;
		}

	}
	return (i + 1);
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
}*/
/*#include "libft.h"
#include <stdlib.h>

int		flag_guessing(char const *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i])
		if (s1[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*new;
	size_t	len;
	size_t	k;

	i = 0;
	k = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	while (flag_guessing(set, s1[i]) && s1[i])
		i++;
	while (flag_guessing(set, s1[len - 1]) && (len - 1))
		len--;
	if (len < i)
		len = i;
	new = malloc(len - i + 1);
	if (!new)
		return (NULL);
	while (i < len)
		new[k++] = s1[i++];
	new[k] = '\0';
	return (new);
}
	*/

#include "libft.h"

int	ft_start(char *s1, char *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		if (s1[i] != set[j])
		{
			j++;
		}

	}
	return (i);
}

int	ft_final(char *s1, char *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1);
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i - 1] == set[j])
		{
			i--;
			j = 0;
		}
		if (s1[i - 1] != set[j])
		{
			j++;
		}

	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	char	*ps1;
	char	*pset;
	int		start;
	int		final;
	int		i;
	int		len;

	ps1 = (char *)s1;
	pset= (char *)set;
	i = 0;
	if (!s1 || !set || set == 0)
		return (NULL);
	start = ft_start(ps1, pset);
	final = ft_final(ps1, pset);
	len = final - start;
	result = (char *) malloc(sizeof(*s1) * (len + 1));
	if (!(result))
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = ps1[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}