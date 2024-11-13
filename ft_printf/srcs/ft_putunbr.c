/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:00:22 by joaomart          #+#    #+#             */
/*   Updated: 2024/11/11 12:00:25 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putunbr(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr > 9)
		i += ft_putunbr(nbr / 10);
	i += ft_putchar((nbr % 10) + '0');
	return (i);
}
