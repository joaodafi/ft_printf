/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:54:56 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/09 18:43:55 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ultoa_base(unsigned long n, char *base)
{
	size_t	len;
	char	*pt;

	len = ft_digits_base(n, base);
	pt = malloc(sizeof(char) * (len + 1));
	if (!pt)
		return (NULL);
	pt[len] = '\0';
	while (--len)
	{
		pt[len] = *(base + (n % ft_strlen(base)));
		n /= ft_strlen(base);
	}
	pt[0] = *(base + (n % ft_strlen(base)));
	return (pt);
}
