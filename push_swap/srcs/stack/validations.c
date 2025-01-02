/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:40:11 by joaomart          #+#    #+#             */
/*   Updated: 2025/01/02 12:06:47 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	valid_atoi(const char *str)
{
	int	i;
	int	digits;

	i - 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	digits = 0;
	while ((str[i] >= '0' && str[i] <= '9') || ft_issapce(str[i]))
	{
		i++;
		digits++;
	}
	if (str[i] || digits == 0 || digits > 10)
		return (0);
	return (1);
}

int	already_sorted(t_stack *stack)
{
	int	i;

	i = stack->top;
	if (i <= 0)
		return (1);
	while (i >= 0)
	{
		if (i == 0)
			break ;
		if (stack->pile[i] > stack->pile[i - 1])
			return (0);
		i--;
	}
	return (1);
}

void	exit_without_error(t_stack *stack_a, t_stack *stack_b,
				char **args, int ac)
{
	if (ac == 2)
		free_args(args);
	free_stack(stack_a);
	free_stack(stack_b);
	exit(0);
}
