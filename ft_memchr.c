/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:25:59 by jgamonal          #+#    #+#             */
/*   Updated: 2022/10/05 10:15:11 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memchr() function locates the first occurrence of c (converted to an
     unsigned char) in string s.
RETURN VALUES
     The memchr() function returns a pointer to the byte located, or NULL if
     no such byte exists within n bytes.*/

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
     unsigned char	*str;
     unsigned int	i;
     
	 str = (unsigned char *)s;
	 i = 0;
     while (i < n)
     {
          if (str[i] == (unsigned char)c)
               return ((void*) &str[i]);
          i++;
		  }
	 return (NULL);
}
