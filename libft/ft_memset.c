/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 11:03:35 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/01 11:24:59 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fills the first n bytes of the memory area pointed to by ptr with the
 * constant byte c
 *
 * @param *ptr Pointer to the block of memory to fill
 * @param c Value to be set. The value is passed as an int, but the function
 * fills the block of memory using the unsigned char conversion of this value.
 * @param n Number of bytes to be set to the value of c
 *
 * @return Returns a pointer to the memory area pointed by ptr
 */

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*str;
	size_t			count;

	str = (unsigned char *)ptr;
	count = 0;
	while (count < n)
	{
		str[count] = (unsigned char)c;
		count++;
	}
	return (ptr);
}
