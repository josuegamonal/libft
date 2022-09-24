/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:37:55 by jgamonal          #+#    #+#             */
/*   Updated: 2022/09/24 11:46:48 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(char *str);
void			ft_bzero(void	*s, size_t	n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*memchr(const void *s, int c, size_t n);
int				memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *restrict dst,
					const void *restrict src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);
char			*ft_strchr(const char *s, int c);
size_t			strlcpy(char *restrict dst,
					const char *restrict src, size_t dstsize);
unsigned int	ft_strlcpy(char *restrict dst,
					const char *restrict src, size_t dstsize);
unsigned int	ft_strlen(const char *str);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*strstr(const char *haystack, const char *needle);
char			*ft_strrchr(const char *s, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
#endif