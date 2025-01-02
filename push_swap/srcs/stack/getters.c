/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:22:37 by joaomart          #+#    #+#             */
/*   Updated: 2025/01/02 15:01:30 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	get_array_length(char **args)
{
	int	i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}

int	get_min_cost(int a, int b)
{
	if (a <= b)
		return (1);
	else if (a == -1 && b == -1)
		return (-1);
	return (2);
}

int	get_directly_above_index(t_stack *stack, int value)
{
	int	i;
	int	closest;

	if (stack == NULL || stack->top < 0)
		return (-1);
	i = 0;
	closest = -1;
	while (i <= stack->top)
	{
		if (stack->pile[i] > value && (closest == -1
				|| stack->pile[i] < stack->pile[closest]))
			closest = i;
	}
	return (closest);
}
