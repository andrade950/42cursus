/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 10:49:59 by joaomart          #+#    #+#             */
/*   Updated: 2025/01/02 15:19:10 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**args;

	if (ac < 2)
		return (0);
	else if (ac == 2)
		args = ft_split(av[1], ' ');
	else
		args = av + 1;
	a = populate_stack(args, ac);
	if (get_array_lenght(args) == 1 || already_sorted(a) == 1)
		exit_without_error(a, NULL, args, ac);
	if (!a)
		print_error(a, args, ac);
	b = initialise_stack();
	sort_stack(a, b, args, ac);
	if (ac == 2)
		free_args(args);
	exit_without_error(a, b, args, ac);
	return (0);
}
