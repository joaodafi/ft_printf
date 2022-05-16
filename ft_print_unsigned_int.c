/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:29:44 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/16 10:17:28 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_int(unsigned int ui)
{
	char	*s;
	int		n;

	s = ft_ultoa_base((unsigned long)ui, DECIMAL_BASE);
	n = ft_print_string(s);
	free(s);
	return (n);
}
