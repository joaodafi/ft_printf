/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:45:28 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/01 11:03:05 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief calculates the length of the string pointed to by str, excluding
 * the terminating null byte ('\0')
 *
 * @param *str Adress of the string whose length is to be found
 *
 * @return Return the length of the string passed
 */

size_t	ft_strlen(const	char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
