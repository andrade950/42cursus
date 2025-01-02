/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:52:56 by joaomart          #+#    #+#             */
/*   Updated: 2025/01/02 11:57:29 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	print_error(t_stack *stack, char **args, int ac)
{
	ft_putstr_fd("Error\n", 2);
	free_stack(stack);
	if (ac == 2)
		free_args(args);
	exit(EXIT_FAILURE);
}
