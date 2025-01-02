/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 12:14:47 by joaomart          #+#    #+#             */
/*   Updated: 2025/01/02 14:04:22 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	swap(t_stack *stack)
{
	int	temp;

	if (stack->top < 1)
		return ;
	temp = stack->pile[stack->top];
	stack->pile[stack->top] = stack->pile[stack->top - 1];
	stack->pile[stack->top - 1] = temp;
}

void	sa(t_stack *stack_a, int	print)
{
	swap(stack_a);
	if (print == 1)
		ft_printf("sa\n");
}

void	sb(t_stack *stack_b, int	print)
{
	swap(stack_b);
	if (print == 1)
		ft_printf("sb\n");
}

void	ss(t_stack *stack_a, t_stack *stack_b, int print)
{
	swap(stack_a);
	swap(stack_b);
	if (print == 1)
		ft_printf("ss\n");
}
