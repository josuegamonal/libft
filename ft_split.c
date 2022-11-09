/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:43:39 by jgamonal          #+#    #+#             */
/*   Updated: 2022/11/09 12:51:19 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

int	ft_wordscntr(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i++;
			counter ++;
		}
		else
			i++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	//char	**strings;
	int	words;
	int i;
	int j;
	int len;

	len = ft_strlen(s);
	counter = ft_wordscntr(s, c);
	char **strings;
	
	strings = malloc(sizeof(char *) * words);
	i = 0;
	while (i <= len)
		{
			strings[words] = 0;
		}
	//strings = malloc (sizeof (char *) * ft_wordscntr(s, c));
}*/

#include "stdio.h"
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static int    count_words(const char *str, char c)
{
    int i;
    int trigger;

    i = 0;
    trigger = 0;
    while (*str)
    {
        if (*str != c && trigger == 0)
        {
            trigger = 1;
            i++;
        }
        else if (*str == c)
            trigger = 0;
        str++;
    }
    return (i);
}

static char    *word_dup(const char *str, int start, int finish)
{
    char    *word;
    int        i;

    i = 0;
    word = (char *)malloc((finish - start + 1) * sizeof(char));
    while (start < finish)
        word[i++] = str[start++];
    word[i] = '\0';
    return (word);
}

char        **ft_split(char const *s, char c)
{
    size_t    i;
    size_t    j;
    int        index;
    char    **split;
    size_t len;
    
    len = ft_strlen(s);
    if (!s || !(split = (char**)malloc((count_words(s, c) + 1) * sizeof(char *))))
        return (0);
    i = 0;
    j = 0;
    index = -1;
    while (i <= len)
    {
        if (s[i] != c && index < 0)
            index = i;
        else if ((s[i] == c || i == len) && index >= 0)
        {
            split[j++] = word_dup(s, index, i);
            index = -1;
        }
        i++;
    }
    split[j] = 0;
    return (split);
}
