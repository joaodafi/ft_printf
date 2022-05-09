/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:46:51 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/09 15:50:16 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_upper(unsigned int ui)
{
	char	*s;
	int		n;

	s = ft_uitoa_base(ui, HEXADECIMAL_BASE);
	n = 0;
	while (s[n])
	{
		s[n] = (char)ft_toupper((int)s[n]);
	}
	n = ft_print_string(s);
	free(s);
	return (n);
}
