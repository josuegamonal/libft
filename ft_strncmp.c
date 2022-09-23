/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:51:03 by jgamonal          #+#    #+#             */
/*   Updated: 2022/09/23 15:55:19 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//int	ft_strncmp(const char *s1, const char *s2, size_t n)
int	ft_strncmp(const char *s1, const char *s2, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
