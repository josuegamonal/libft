/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:21:51 by jgamonal          #+#    #+#             */
/*   Updated: 2022/09/24 11:37:38 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

unsigned int	ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
    size_t	i;
	size_t	len;

	len = 0;
	if (src != NULL)
	{
		len = ft_strlen(src);
		if (dst != NULL && dstsize != 0)
		{
			i = 0;
			while ((i < len) && i < (dstsize - 1))
			{
				dst[i] = src[i];
				i++;
			}
			dst[i] = '\0';
		}
	}
	return (len);
}
