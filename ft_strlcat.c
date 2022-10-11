/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:22:59 by jgamonal          #+#    #+#             */
/*   Updated: 2022/10/11 14:47:08 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*src1;
	size_t	len_dst;
	size_t	len_src;
	size_t	res;
	size_t	i;

	src1 = (char *)src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src1);
	i = 0;
	res = 0;
	if (dstsize > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + dstsize;
	while (src1[i] && (len_dst + 1) < dstsize)
	{
		dst[len_dst] = src1[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}
