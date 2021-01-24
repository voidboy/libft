/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclerac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:56:51 by aclerac           #+#    #+#             */
/*   Updated: 2021/01/23 06:50:14 by aclerac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *str, char c)
{
	int		i;
	int		words_count;
	char	last;

	words_count = 0;
	i = 0;
	last = c;
	while (str[i])
	{
		if ((last == c) && (str[i] != c))
			words_count++;
		last = str[i];
		i++;
	}
	return (words_count);
}

static int		find_next_word(char *dest, const char *str, char c)
{
	int i;

	i = 0;
	while (str[i] && (str[i] != c))
	{
		if (dest)
			dest[i] = str[i];
		i++;
	}
	if (dest)
		dest[i] = '\0';
	return (i);
}

static char		**alloc_bf(int words_counter, char const *str, char c)
{
	char	**s;
	int		i;
	int		word_len;

	if ((s = malloc(sizeof(char *) * (words_counter + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < words_counter)
	{
		while (*str == c)
			str++;
		word_len = find_next_word(NULL, str, c);
		if ((s[i++] = malloc(sizeof(char) * word_len + 1)) == NULL)
		{
			while (--i >= 0)
				free(s[i]);
			free(s);
			return (NULL);
		}
		str += word_len + 1;
	}
	s[i] = NULL;
	return (s);
}

char			**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	int		words_counter;
	char	**s;

	if (!str)
		return (NULL);
	if ((s = alloc_bf(count_words(str, c), str, c)) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	words_counter = 0;
	while (words_counter < count_words(str, c))
	{
		while (str[i] == c)
			i++;
		i += find_next_word(s[j++], str + i, c);
		words_counter++;
	}
	return (s);
}
