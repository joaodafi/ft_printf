/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:35:21 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/01 12:58:30 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n bytes from memory area src to memory area dest
 * the copy is always done in a non-destructive manner
 *
 * @param *dest Adress of the destination where content is copied to
 * @param *src Adress of the source data to copy from
 * @param n Number of bytes to be copied
 *
 * @return Returns the pointer of dest
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destiny;
	const char	*source;

	if ((dest == src) || (n == 0))
		return (dest);
	destiny = (char *)dest;
	source = (const char *)src;
	if (source < destiny)
	{
		while (n--)
			*(destiny + n) = *(source + n);
		return (dest);
	}
	while (n--)
		*destiny++ = *source++;
	return (dest);
}
