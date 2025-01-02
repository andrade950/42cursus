/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scans.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:02:11 by joaomart          #+#    #+#             */
/*   Updated: 2025/01/02 15:05:36 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	scan_top(t_stack *stack, int min, int max)
{
	int	i;

	i = stack->top;
	while (i >= 0)
	{
		if (stack->pile[i] >= min && stack->pile[i] <= max)
			return (i);
		i--;
	}
	return (-1);
}

int	scan_bottom(t_stack *stack, int min, int max)
{
	int	i;

	i = 0;
	while (i <= stack->top)
	{
		if (stack->pile[i] >= min && stack->pile[i] <= max)
			return (i);
		i++;
	}
	return (-1);
}
