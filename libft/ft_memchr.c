/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 14:27:04 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/02 09:47:18 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Scans the initial n bytes of the memory area pointed to by s
 * for the first instance of c
 * Both c and the memory area pointed to  by s are interpreted as unsigned char
 *
 * @param *s Pointer to the memory area where the search is performed
 * @param c value to be passed as an int
 * But the search byte per byte is made as unsigned char conversion of of it
 * @param n Number of bytes to in s to be compared to c
 *
 * @return Return a pointer to the matching byte
 * or NULL if the character does not occur in the given memory area
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		if (((unsigned char *)s)[counter] == (unsigned char)c)
			return ((void *)(s + counter));
		counter++;
	}
	return (0);
}
