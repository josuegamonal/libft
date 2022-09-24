/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:09:45 by jgamonal          #+#    #+#             */
/*   Updated: 2022/09/24 10:24:24 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strchr() function locates the first occurrence of c (converted to a char)
in the string pointed to by s.  The terminating null character is considered 
to be part of the string; therefore if c is `\0', the functions locate the 
terminating `\0'.

The functions strchr() and strrchr() return a pointer to the located character, 
or NULL if the character does not appear in the string*/

char	*ft_strchr(const char *s, int c)
{
	int 	i;
	char *s2;
	s2 = (char *)s;
	i = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == '\0')
			return (&s2[i]);
		if (s2[i] == c)
			return (&s2[i]);
	i++;
	}
	return (&s2[i]);
}
