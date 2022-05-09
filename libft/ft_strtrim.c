/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:51:35 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/02 16:04:34 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a copy of’s1’ with the
 * characters specified in ’set’ removed from the beginning and the end
 * of the string
 *
 * @param *s1 The string to be trimmed
 * @param *set The reference set of characters to trim
 *
 *@return The trimmed string. NULL if the allocation fails
 */

static int	check_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*pt;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (check_set(s1[start], set))
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (check_set(s1[end - 1], set))
		end--;
	pt = ft_substr(s1, start, end - start);
	return (pt);
}
