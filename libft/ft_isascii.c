/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:27:40 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/01 10:55:14 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the passed character is ASCII
 *
 * @param c This is the character to be checked
 *
 * @return Returns non-zero value if c is an ASCII, else returns 0
 */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
