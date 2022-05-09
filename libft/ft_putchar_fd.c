/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:58:59 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/02 17:02:02 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the character ’c’ to the given file descriptor
 *
 * @param c The character to output
 * @param fd The file descriptor on which to write
 */

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
