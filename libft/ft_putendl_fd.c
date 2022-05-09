/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:07:32 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/02 17:51:05 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the string ’s’ to the given file descriptor,
 * followed by a newline
 *
 * @param *s The string to output
 * @param fd The file descriptor on which to write
 */

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
		write (fd, s++, 1);
	write(fd, "\n", 1);
}
