/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 10:45:23 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/02 16:26:15 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	words;
	size_t	signal;

	words = 0;
	signal = 0;
	while (*s)
	{
		if (*s != c && !signal)
		{
			signal = 1;
			words++;
		}
		else if (*s == c)
			signal = 0;
		s++;
	}
	return (words);
}

static size_t	ft_wlen(int w_start, size_t w_end)
{
	return (w_end - (size_t)w_start);
}

/**
 * @brief Allocates (with malloc(3)) and returns an array of strings obtained by
 * splitting ’s’ using the character ’c’ as a delimiter
 * The array must be ended by a NULL pointer
 *
 * @param *s The string to be split
 * @param c The delimiter character
 *
 * @return The array of new strings resulting from the split
 * NULL if the allocation fails
 */

char	**ft_split(char const *s, char c)
{
	char	**pt;
	int		w_start;
	size_t	ap;
	size_t	i;

	pt = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!s || !pt)
		return (0);
	ap = 0;
	i = 0;
	w_start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && w_start < 0)
			w_start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && w_start >= 0)
		{
			pt[ap++] = ft_substr(s, (unsigned int)w_start, ft_wlen(w_start, i));
			w_start = -1;
		}
		i++;
	}
	pt[ap] = 0;
	return (pt);
}
