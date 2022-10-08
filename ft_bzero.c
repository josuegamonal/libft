/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:17:04 by jgamonal          #+#    #+#             */
/*   Updated: 2022/10/08 10:59:10 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The bzero() function writes n zeroed bytes to the string s.  If n is zero, 
bzero() does nothing.*/

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*a;

	a = (char *)s;
	while (n > 0)
	{
		*a = '\0';
		a++;
		n--;
	}
}
