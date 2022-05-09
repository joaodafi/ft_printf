/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:03:20 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/02 17:49:27 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the string ’s’ to the given file descriptor
 *
 * @param *s The string to output
 * @param fd The file descriptor on which to write
 */

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write (fd, s++, 1);
}
