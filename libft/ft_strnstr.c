/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 15:22:50 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/02 11:09:24 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of the null-terminated string little
 * in the string big, where not more than n characters are searched
 * Characters that appear after a ‘\0’ character are not searched
 *
 * @param *big The C string to be scanned
 * @param *little The C string to be searched inside big
 * @param n The maximum number of characters to be searched
 *
 * @return If little is an empty string, big is returned
 * if little occurs nowhere in big, NULL is returned
 * Otherwise a pointer to the first character of the first occurrence of little
 * is returned.
 */

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	littlelen;

	littlelen = ft_strlen(little);
	if (!littlelen)
		return ((char *)big);
	while (*big && littlelen <= n--)
	{
		if (ft_strncmp(big, little, littlelen) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
