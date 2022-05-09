/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:15:19 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/02 16:58:03 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies the function f to each character of the string passed as
 * argument, and passing its index as first argument
 * Each character is passed by address to f to be modified if necessary
 *
 * @param *s The string on which to iterate
 * @param (*f) The function to apply to each character
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	ctr;

	if (!s || !f)
		return ;
	ctr = 0;
	while (s[ctr])
	{
		f(ctr, s + ctr);
		ctr++;
	}
}
