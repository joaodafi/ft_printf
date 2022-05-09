/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:08:05 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/09 16:49:08 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_digits_base(unsigned int n, char *base)
{
	size_t	len;
	size_t	nbr;

	if (n < ft_strlen(base))
		return (1);
	len = 0;
	nbr = (size_t)n;
	while (nbr > 0)
	{
		nbr /= ft_strlen(base);
		len++;
	}
	return (len);
}
