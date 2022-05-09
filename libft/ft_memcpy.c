/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:43:10 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/01 12:49:03 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n bytes from memory area src to memory area dest
 * The memory areas must not overlap
 * Use ft_memmove if the memory areas do overlap
 *
 * @param *dest Adress of the destination where content is copied to
 * @param *src Adress of the source data to copy from
 * @param n Number of bytes to be copied
 *
 * @return Returns the pointer of dest
 */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destiny;
	const char	*source;

	if (!dest && !src)
		return (NULL);
	if ((dest == src) || (n == 0))
		return (dest);
	destiny = (char *)dest;
	source = (const char *)src;
	while (n--)
		*destiny++ = *source++;
	return (dest);
}
