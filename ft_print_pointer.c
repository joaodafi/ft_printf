/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:24:53 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/09 17:49:42 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *p)
{
	char	*s;
	int		n;

	if (!p)
		return (write(1, "(nil)", 5));
	s = ft_uitoa_base((unsigned long)p, HEXADECIMAL_BASE);
	n = write(1, "0x", 2);
	n += ft_print_string(s);
	free(s);
	return (n);
}
