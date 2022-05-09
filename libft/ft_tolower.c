/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:00:44 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/01 19:44:21 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts uppercase letter to lowercase
 * The argument must be representable as an unsigned char
 *
 * @param c Letter to be converted to lowercase
 *
 * @return his function returns lowercase equivalent to c, if such value exists,
 * else c remains unchanged
 * The value is returned as an int value that can be implicitly casted to char
 */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
