/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josue <josue@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:47:08 by jgamonal          #+#    #+#             */
/*   Updated: 2022/11/17 19:02:47 by josue            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
    t_list	*new;

    if (!(new = malloc (sizeof (t_list))))
        return (NULL);
    new -> content = content;
    new -> next = NULL;
    return (new);
}
