/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:06:56 by joaomart          #+#    #+#             */
/*   Updated: 2025/01/02 15:13:49 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	rotate(t_stack *stack)
{
	int	temp;
	int i;

	if (stack->top < 1)
		return ;
	temp = stack->pile[stack->top];
	i = stack->top;
	while (i > 0)
	{
		stack->pile[i] = stack->pile[i - 1];
		i--;
	}
	stack->pile[0] = temp;
}

void	ra(t_stack * stack_a, int print)
{
	rotate(stack_a);
	if (print == 1)
		ft_printf("ra\n");
}

void	rb(t_stack * stack_b, int print)
{
	rotate(stack_b);
	if (print == 1)
		ft_printf("rb\n");
}

void	rr(t_stack *stack_a, t_stack *stack_b, int print)
{
	rotate(stack_a);
	rotate(stack_b);
	if (print == 1)
		ft_printf("rr\n");
}

void	reverse_rotate(t_stack *stack)
{
	int	temp;
	int	i;

	if (stack->top < 1)
		return ;
	temp = stack->pile[0];
	i = 0;
	while (i < stack->top)
	{
		stack->pile[i] = stack->pile[i + 1];
		i++;
	}
	stack->pile[stack->top] = temp;
}

void	rra(t_stack *stack_a, int print)
{
	reverse_rotate(stack_a);
	if (print == 1)
		ft_printf("rra\n");
}

void	rrb(t_stack *stack_b, int print)
{
	reverse_rotate(stack_b);
	if (print == 1)
		ft_printf("rrb\n");
}

void	rrr(t_stack *stack_a, t_stack *stack_b, int print)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	if (print == 1)
		ft_printf("rrr\n");
}
