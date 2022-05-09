/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:37:50 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/01 19:42:13 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts lowercase letter to uppercase
 * The argument must be representable as an unsigned char
 *
 * @param c Letter to be converted to uppercase
 *
 * @return his function returns uppercase equivalent to c, if such value exists,
 * else c remains unchanged
 * The value is returned as an int value that can be implicitly casted to char
 */

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	return (c);
}
