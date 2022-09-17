/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:59:46 by jgamonal          #+#    #+#             */
/*   Updated: 2022/09/17 11:33:55 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
char	ft_toupper(int c);
char	ft_tolower(int c);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isprint('l'));
	printf("%c\n", ft_toupper('d'));
	printf("%c\n", ft_tolower('D'));
	printf("%d\n", ft_strlen("hola"));
	printf("%d\n", ft_atoi("    +-++-1234dssndsj"));
	printf("%d\n", ft_strncmp("hola", "holi", 4));
	return (0);
}
