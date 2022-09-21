/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:09:45 by jgamonal          #+#    #+#             */
/*   Updated: 2022/09/21 19:39:50 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	
	while (*s != '\0')
	{
		if (*s == c)
			{
				return (*s);
			}
	s++;
	}
return (*s);
}

int main(void)
{
	
	ft_strchr("hola @josu", '@');
	printf("%s", ft_strchr(s));
}