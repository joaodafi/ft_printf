/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:06:01 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/01 19:32:00 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The strlcpy() function copies up to size - 1 characters from the
 * NUL-terminated string src to dst, NUL-terminating the result
 *
 * @param *dest Adress of the destination array where the content will be copied
 * @param *src string to be copied
 * @param destsize Full size of the destination buffer
 *
 * @return ength of the string they tried to create
 * That means the length of src
 */

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize == 0)
		return (ft_strlen(src));
	while (i < destsize - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}
