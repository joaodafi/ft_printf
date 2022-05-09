/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:43:24 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/09 15:45:58 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int ui)
{
	char	*s;
	int		n;

	s = ft_uitoa_base(ui, HEXADECIMAL_BASE);
	n = ft_print_string(s);
	free(s);
	return (n);
}
