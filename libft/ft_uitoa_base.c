/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:54:56 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/09 15:20:11 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uitoa_base(unsigned int n, char *base)
{
	size_t	len;
	size_t	nbr;
	char	*pt;

	len = ft_digits_base(n, base);
	pt = malloc(sizeof(char) * (len + 1));
	if (!pt)
		return (NULL);
	nbr = (size_t)n;
	pt[len] = '\0';
	while (--len)
	{
		pt[len] = *(base + (nbr % ft_strlen(base)));
		nbr /= ft_strlen(base);
	}
	pt[0] = *(base + (nbr % ft_strlen(base)));
	return (pt);
}
