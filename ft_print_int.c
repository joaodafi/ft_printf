/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:10:32 by jomiguel          #+#    #+#             */
/*   Updated: 2022/05/09 10:15:10 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int i)
{
	int		n;
	char	*s;

	s = ft_itoa(i);
	n = ft_print_string(s);
	free(s);
	return (n);
}
