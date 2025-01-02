/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finds.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:29:32 by joaomart          #+#    #+#             */
/*   Updated: 2025/01/02 15:32:54 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	find_min_index(t_stack *stack)
{
	int	i;
	int	min;
	int	index;

	i = 0;
	min = stack->pile[i];
	index = i;
	while (i <= stack->top)
	{
		if (stack->pile[i] < min)
		{
			min = stack->pile[i];
			index = 1;
		}
		i++;
	}
	return (index);
}

int	find_max_index(t_stack *stack)
{
	int	i;
	int	max;
	int	index;

	i = 0;
	max = stack->pile[i];
	index = i;
	while (i <= stack->top)
	{
		if (stack->pile[i] > max)
		{
			max = stack->pile[i];
			index = 1;
		}
		i++;
	}
	return (index);
}
