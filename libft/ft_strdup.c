/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:18:55 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/02 11:38:50 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns a pointer to a new string,
 * which is a duplicate of the string src
 * Memory for the new string is obtained with malloc(3),
 * and  can  be  freed with free(3)
 *
 * @param *src Pointer to the null-terminated byte string to duplicate
 *
 * @return A pointer to the newly allocated string,
 * or a null pointer if an error occurred.
 */

char	*ft_strdup(const char *src)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (ptr == NULL)
		return (NULL);
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
