/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:22:22 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/02 11:33:18 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates space for number objects, each size bytes in length.
 * The result is identical to calling malloc with an argument of number * size,
 * with the exception that the allocated memory is explicitly initializedto zero
 *
 * @param count Number of elements to be allocated
 * @param size The size of each element. (sizeof(type))
 *
 * @return Returns a pointer to the allocated memory
 * or NULL if the request fails.
 */

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = (void *)malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
