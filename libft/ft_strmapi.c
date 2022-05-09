/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:01:30 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/02 16:53:23 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies the function ’f’ to each character of thestring ’s’ to create
 * a new string (with malloc(3)) resulting from successive applications of ’f’
 *
 * @param *s The string on which to iterate
 * @param (*f) The function to apply to each character
 *
 * @return The string created from the successive applications of ’f’
 * Returns NULL if the allocation fails
  */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	ctr;
	char			*pt;

	if (!s || (!s && !f))
		return (ft_strdup (""));
	else if (!f)
		return (ft_strdup (s));
	pt = ft_strdup (s);
	if (!pt)
		return (NULL);
	ctr = 0;
	while (s[ctr])
	{
		pt[ctr] = f(ctr, pt[ctr]);
		ctr++;
	}
	return (pt);
}
