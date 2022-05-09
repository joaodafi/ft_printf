/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 11:03:35 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/01 11:33:34 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes n bytes containing '\0' to the memory pointed by str
 *
 * @param *str Ponter to the block of memory in which zeros are copied into
 * @param n Number of bytes in which zeros are copied into.
 */

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}
