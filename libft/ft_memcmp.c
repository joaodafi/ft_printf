/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 14:49:54 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/02 10:44:49 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares the first n bytes of the memory areas s1 and s2
 * imterpreted as unsigned char
 *
 * @param *s1 First pointer to a block of memory
 * @param *s2 Second pointer to a block of memory
 * @param n Number of bytes ti be compared
 *
 * @return Return an integer less than, equal to, or greater than zero
 * if the first n bytes of s1 is found, to be respectively,
 * less than, to match, or be greater than the first n bytes of s2
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	if (n == i)
		return (0);
	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	while (i < (n - 1) && p1[i] == p2[i])
		i++;
	return (p1[i] - p2[i]);
}
