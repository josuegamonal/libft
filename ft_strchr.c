/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:09:45 by jgamonal          #+#    #+#             */
/*   Updated: 2022/10/08 10:53:03 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strchr() function locates the first occurrence of c (converted to a char)
in the string pointed to by s.  The terminating null character is considered 
to be part of the string; therefore if c is `\0', the functions locate the 
terminating `\0'.

The functions strchr() and strrchr() return a pointer to the located character, 
or NULL if the character does not appear in the string*/

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char *s2;

	s2 = (char *)s;
	while (*s2 != c)
	{
		if (*s2 == '\0')
		{	
			return (NULL);
		}
		s2++;
	}
	return (s2);
}
