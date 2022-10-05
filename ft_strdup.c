/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:31:55 by jgamonal          #+#    #+#             */
/*   Updated: 2022/10/05 10:17:03 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and
     returns a pointer to it.  The pointer may subsequently be used as an argument to the function
     free(3).

     If insufficient memory is available, NULL is returned and errno is set to ENOMEM.

     The strndup() function copies at most n characters from the string s1 always NUL terminating the
     copied string.*/

	 #include <string.h>

     char *ft_strdup(const char *s1);