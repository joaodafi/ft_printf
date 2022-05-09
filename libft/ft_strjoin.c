/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 09:12:34 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/02 14:17:38 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a new string,
 *  which is the result of the concatenation of ’s1’ and ’s2’
 *
 * @param *s1 The prefix string
 * @param *s2 The suffix string
 *
 * @return The new string. NULL if the allocation fails
 */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pt;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	pt = (char *)malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!pt)
		return (NULL);
	ft_memmove(pt, s1, ft_strlen(s1));
	ft_memmove((pt + ft_strlen(s1)), s2, ft_strlen(s2));
	pt[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (pt);
}
