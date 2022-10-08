/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:22:59 by jgamonal          #+#    #+#             */
/*   Updated: 2022/10/08 09:49:17 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlcpy() and strlcat() functions copy and concatenate strings with the same input parameters and
     output result as snprintf(3).  They are designed to be safer, more consistent, and less error prone
     replacements for the easily misused functions strncpy(3) and strncat(3).

     strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termination if
     there is room.  Note that room for the NUL should be included in dstsize.

     strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result
     if dstsize is not 0.

     strlcat() appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1
     characters.  It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer
     than dstsize (in practice this should not happen as it means that either dstsize is incorrect or that
     dst is not a proper string).

     If the src and dst strings overlap, the behavior is undefined.

RETURN VALUES 
     Besides quibbles over the return type (size_t versus int) and signal handler safety (snprintf(3) is
     not entirely safe on some systems), the following two are equivalent:

           n = strlcpy(dst, src, len);
           n = snprintf(dst, len, "%s", src);

     Like snprintf(3), the strlcpy() and strlcat() functions return the total length of the string they
     tried to create.  For strlcpy() that means the length of src.  For strlcat() that means the initial
     length of dst plus the length of src.

     If the return value is >= dstsize, the output string has been truncated.  It is the caller's respon-
     sibility to handle this.*/
	 
#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
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
	{
		res = len_src + len_dst;
	}
	else
	{
		res = len_src + dstsize;
	}
	while (src1[i] && (len_dst + 1) < dstsize)
	{
		dst[len_dst] = src1[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}