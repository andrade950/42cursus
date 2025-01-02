/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:24:06 by joaomart          #+#    #+#             */
/*   Updated: 2025/01/02 15:49:40 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	move_to_top(t_stack *stack, int min, int max, char stack_name)
{
	if (get_min_cost(stack->top - scan_top(stack, min, max),
					scan_bottom(stack, min, max) + 1) == 1)
	{
		while (scan_bottom(stack, min, max) + 1 > 0 && stack->top
				- scan_top(stack, min, max) > 0)
		{
			if (stack_name == 'a')
				ra(stack, 1);
			else
				rb(stack, 1);
		}
	}
	else
	{
		while (scan_bottom(stack, min, max) + 1 > 0 && stack->top
				- scan_top(stack, min, max) > 0)
		{
			if (stack_name == 'a')
				rra(stack, 1);
			else
				rrb(stack, 1);
		}
	}
}

int	is_bigger_or_smaller(t_stack *stack, int value)
{
	int	i;
	int	bigger;
	int	smaller;

	i = stack->top;
	bigger = 0;
	smaller = 0;
	while (i >= 0)
	{
		if (stack->pile[i] > stack->pile[bigger])
			bigger = 1;
		if (stack->pile[i] < stack->pile[smaller])
			smaller = 1;
		i--;
	}
	if (value > stack->pile[bigger])
		return (1);
	else if (value < stack->pile[smaller])
		return (-1);
	return (0);
}

void	smart_push_b(t_stack *stack_a, t_stack *stack_b, int value)
{
	int	target;
	int	compare;
	int	min_b;
	int	max_b;

	min_b = find_min_index(stack_b);
	max_b = find_max_index(stack_b);
	if (is_bigger_or_smaller(stack_b, value) == 1)
	{
		compare = get_min_cost(stack_b->pile[min_b], stack_b->pile[max_b]);
		if (compare == 1)
			target = stack_b->pile[min_b];
		else
			target = stack_b->pile[max_b];
	}
	else if (is_bigger_or_smaller(stack_b, value) == -1)
		target = stack_b->pile[min_b];
	else
		target = 0;
	move_to_top(stack_b, target, target, 'b');
	pb(stack_a, stack_b, 1);
}

void	sort_chunk(t_stack *stack_a, t_stack *stack_b,
				int chunk_start, int chunk_end)
{
	while (scan_top(stack_a, chunk_start, chunk_end) != -1
			&& scan_bottom(stack_a, chunk_start, chunk_end) != -1)
	{
		move_to_top(stack_a, chunk_start, chunk_end, 'a');
		smart_push_b(stack_a, stack_b, stack_a->pile[stack_a->top]);
	}
}

void	dump_back(t_stack *stack_a, t_stack *stack_b)
{
	int	max;

	while (stack_b->top >= 0)
	{
		max = find_max_index(stack_b);
		move_to_top(stack_b, stack_b->pile[max],
				stack_b->pile[max], 'b');
		pa(stack_a, stack_b, 1);
	}
}
