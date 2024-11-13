/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:25:10 by joaomart          #+#    #+#             */
/*   Updated: 2024/11/11 09:57:56 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	hex_count(unsigned long nbr, char *base)
{
	int	i;

	i = 0;
	if (nbr >= 16)
		i += hex_count(nbr / 16, base);
	i += ft_putchar(base[nbr % 16]);
	return (i);
}

int	ft_putptr(unsigned long ptr)
{
	char	*base;
	int		i;

	base = "0123456789abcdef";
	if (ptr == 0)
		return (ft_putstr("(nill)"));
	i = 0;
	i += ft_putstr("0x");
	i += hex_count(ptr, base);
	return (i);
}
