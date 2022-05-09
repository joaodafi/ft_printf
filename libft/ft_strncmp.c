/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 11:58:20 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/02 10:02:41 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares, up to, the first n bytes of two strings
 *
 * @param *s1 First string to compare
 * @param *s2 Second string to compare
 * @param n Maximum number of characters to be compared
 *
 * @return Return an integer less than, equal to, or greater than zero
 * if *s1 (or the first n bytes thereof) is found, to be respectively,
 * less than, to match, or be greater than s2
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && s1[i] && s2[i] && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
