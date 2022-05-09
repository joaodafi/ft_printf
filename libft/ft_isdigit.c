/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 15:21:05 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/01 10:55:07 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the passed character is a digit (0 through 9)
 *
 * @param c The char to be checked.
 *
 * @return Returns a non-zero value if c is a digit, else it returns 0
 */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
