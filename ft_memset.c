/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:42:51 by jgamonal          #+#    #+#             */
/*   Updated: 2022/10/05 10:30:30 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.

RETURN VALUES
     The memset() function returns its first argument.*/
	 
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*a;

	a = (char *)b;
	while (len > 0)
	{
		*a = c;
		a++;
		len--;
	}
	return (b);
}
