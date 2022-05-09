/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 15:21:31 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/01 10:55:19 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the passed character is alphanumeric
 *
 * @param c The character to be checked
 *
 * @return Returns non-zero value if c is a digit or a letter, else returns 0
 */

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
