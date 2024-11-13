/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:57:10 by joaomart          #+#    #+#             */
/*   Updated: 2024/11/11 11:23:19 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_puthexa(unsigned long n, char format)
{
	char	*base;
	int		i;

	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	i = 0;
	if (n >= 16)
	{
		i += ft_puthexa(n / 16, format);
		i += ft_puthexa(n % 16, format);
	}
	else if (n < 16)
		i += ft_putchar(base[n]);
	return (i);
}
