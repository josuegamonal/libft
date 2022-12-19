/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:30:45 by jgamonal          #+#    #+#             */
/*   Updated: 2022/12/19 14:34:24 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;

	if (size >= 65535)
		return (NULL);
	pointer = malloc(count * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	ft_bzero(pointer, (count * size));
	return (pointer);
}
