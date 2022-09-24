/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:24:29 by jgamonal          #+#    #+#             */
/*   Updated: 2022/09/24 10:22:14 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strchr() function locates the first occurrence of c (converted to a char) 
in the string pointed to by s.  The terminating null character is considered 
to be part of the string; therefore if c is `\0', the functions locate the 
terminating `\0'
The functions strchr() and strrchr() return a pointer to the located character,
or NULL if the character does not appear in the string..*/

char	*ft_strrchr(const char *s, int c)
{
	char 	a;
	char	*s1;
	int		i;

	s1 = (char *)s;
	a = c + '0';
	i = 0;
	while (i != '\0')
	{
		if (s1[i] == a)
		{
			return (&s1[i]);
		}
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (0);
}
