/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 21:16:21 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/02 09:09:58 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Searche the last occurrence of the character c (an unsigned char)
 * in the string pointed to by the argument s
 * The terminating null	character is considered	part of	the string, so
 * if c is '\0', the functions locate the terminating '\0'
 *
 * @param *s The C string to be scanned
 * @param c The character to be located
 * It is passed as int, but it is compared as a unsigned char
 *
 * @return Returns a pointer of the last occurrence of c in the string s
 * or NULL if the character is not found
 */

char	*ft_strrchr(const char *s, int c)
{
	size_t	counter;

	counter = 0;
	while (counter <= ft_strlen(s))
	{
		if (s[ft_strlen(s) - counter] == (unsigned char)c)
			return ((char *)s + (ft_strlen(s) - counter));
		counter++;
	}
	return (0);
}
