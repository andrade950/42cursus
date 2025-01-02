/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:16:39 by joaomart          #+#    #+#             */
/*   Updated: 2025/01/02 14:21:55 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	push(t_stack *stack, t_stack *dest)
{
	if (stack->top < 0)
		return ;
	dest->top++;
	dest->pile[dest->top] = stack->pile[stack->top];
	stack->top--;
}

void	pa(t_stack *stack_a, t_stack *stack_b, int print)
{
	push(stack_b, stack_a);
	if (print == 1)
		ft_printf("pa\n");
}

void	pb(t_stack *stack_a, t_stack *stack_b, int print)
{
	push(stack_a, stack_b);
	if (print == 1)
		ft_printf("pb\n");
}
