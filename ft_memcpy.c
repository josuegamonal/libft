/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:17:17 by jgamonal          #+#    #+#             */
/*   Updated: 2022/10/08 09:14:26 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memcpy() function copies n bytes from memory area src to memory area dst.
If dst and src overlap, behavior is undefined. Applications in which dst and 
src might overlap should use memmove(3)instead.

The memcpy() function returns the original value of dst.*/

#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*dst1;
	char	*src1;
	unsigned int	i;

	dst1 = (char *) dst;
	src1 = (char *) src;
	i = 0;
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
