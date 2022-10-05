/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:19:54 by jgamonal          #+#    #+#             */
/*   Updated: 2022/10/05 10:15:50 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memmove() function copies len bytes from string src to string dst.  The two strings may overlap;
     the copy is always done in a non-destructive manner.

RETURN VALUES
     The memmove() function returns the original value of dst.*/
	 
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst1;
	char	*src1;
	unsigned int	i;

	dst1 = (char *) dst;
	src1 = (char *) src;
	i = 0;
	while (i < len)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (0);
}
