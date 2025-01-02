/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:14:49 by joaomart          #+#    #+#             */
/*   Updated: 2025/01/02 11:59:43 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"
#include "stack.h"
#include <stdio.h>

t_stack	*initialise_stack(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	stack->top = -1;
	stack->size = 0;
	return (stack);
}

t_stack	*populate_stack(char **args, int ac)
{
	int		i;
	long	n;
	t_stack	*stack;

	stack = initialise_stack();
	i = get_array_length(args) - 1;
	stack->size = i + 1;
	while (i >= 0)
	{
		if (valid_atoi(args[i]))
		{
			n = ft_atoi(args[i]);
			if (already_exists(n, stack) == 1 || n > 2147483647
				|| n < -2147483648)
				print_error(stack, args, ac);
		}
		else
			print_error(stack, args, ac);
		stack->top++;
		stack->pile[stack->top] = n;
		i--;
	}
	return (stack);
}
