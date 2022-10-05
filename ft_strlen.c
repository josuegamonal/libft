/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:22:45 by jgamonal          #+#    #+#             */
/*   Updated: 2022/10/05 10:18:58 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*he strlen() function computes the length of the string s.  The strnlen() function attempts to compute
     the length of s, but never scans beyond the first maxlen bytes of s.

RETURN VALUES
     The strlen() function returns the number of characters that precede the terminating NUL character.  The
     strnlen() function returns either the same result as strlen() or maxlen, whichever is smaller.

#include <string.h>*/

unsigned int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
