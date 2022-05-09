/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:47:19 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/01 13:09:31 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Appends string src to the end of dst
 * It will append at most dstsize - strlen(dst) - 1 characters
 * It will then NUL-terminate, unless dstsize is 0 or the original dst string
 * was longer than dstsize
 * If the src and dst strings overlap, the behavior is undefined
 *
 * @param *dst Adress of the destination array, which should contain a C string,
 * and should be large enough to contain the concatenated resulting string
 * @param src This is the string to be appended
 * @param size Full size of the destination buffer
 *
 * @return The total length of the string they tried to create
 * That means the initial length of dst + the length of src
 */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	counter;
	size_t	dst_len;

	counter = 0;
	dst_len = ft_strlen (dst);
	if (size == 0)
		return (ft_strlen (src));
	if (size <= dst_len)
		return (size + ft_strlen (src));
	else
	{
		while (src[counter] && (dst_len + counter + 1) < size)
		{
			dst[dst_len + counter] = src[counter];
			counter++;
		}
		dst[dst_len + counter] = '\0';
		return (dst_len + ft_strlen (src));
	}
}
