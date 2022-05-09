/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 08:20:07 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/02 14:07:50 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a substring from the string s
 * The substring begins at index ’start’ and is of maximum size ’len’
 *
 * @param *s The string from which to create the substring
 * @param start The start index of the substring in the string ’s’
 * @param len The maximum length of the substring
 *
 * @return The substring. NULL if the allocation fails
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*res;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len > start)
	{
		i = 0;
		while (s[i + start] && i < len)
			i ++;
		len = i;
	}
	else
		return (ft_strdup(""));
	res = (char *)ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
