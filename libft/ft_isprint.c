/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:33:32 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/01 10:51:14 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the passed character is printable (" " space to "~")
 *
 * @param c The char to be checked
 *
 * @return Returns a non-zero value if c is printable, else it returns 0
 */

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
