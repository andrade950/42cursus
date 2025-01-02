/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 10:58:01 by joaomart          #+#    #+#             */
/*   Updated: 2025/01/02 15:58:24 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "../../inc/push_swap.h"
# include <stdlib.h>

typedef struct s_stack
{
	int	top;
	int	size;
	int	pile[1024];
}		t_stack;

/* stack.c */
t_stack	*initialise_stack(void);
t_stack	*populate_stack(char **args, int ac);

/* swaps.c */
void	swap(t_stack *stack);
void	sa(t_stack *stack_a, int	print);
void	sb(t_stack *stack_b, int	print);
void	ss(t_stack *stack_a, t_stack *stack_b, int print);

/* pushs.c */
void	push(t_stack *stack, t_stack *dest);
void	pa(t_stack *stack_a, t_stack *stack_b, int print);
void	pb(t_stack *stack_a, t_stack *stack_b, int print);

/* rotates */
void	rotate(t_stack *stack);
void	ra(t_stack * stack_a, int print);
void	rb(t_stack * stack_b, int print);
void	rr(t_stack *stack_a, t_stack *stack_b, int print);
void	reverse_rotate(t_stack *stack);
void	rra(t_stack *stack_a, int print);
void	rrb(t_stack *stack_b, int print);
void	rrr(t_stack *stack_a, t_stack *stack_b, int print);

/* getters.c */
int	get_array_length(char **args);
int	get_min_cost(int a, int b);
int	get_directly_above_index(t_stack *stack, int value);

/* sorts.c */
void	sort_stack(t_stack *stack_a, t_stack *stack_b, char ** args, int ac);

/* scans.c */
int	scan_top(t_stack *stack, int min, int max);
int	scan_bottom(t_stack *stack, int min, int max);

/* finds.c */
int	find_min_index(t_stack *stack);
int	find_max_index(t_stack *stack);

/* frees.c */
void	free_stack(t_stack *stack);
void	free_args(char **args);

/* validations.c */
int	ft_isspace(char c);
int	valid_atoi(const char *str);
int	already_sorted(t_stack *stack);
void	exit_without_error(t_stack *stack_a, t_stack *stack_b, char **args, int ac);

/* utils.c */
void	move_to_top(t_stack *stack, int min, int max, char stack_name);
int	is_bigger_or_smaller(t_stack *stack, int value);
void	smart_push_b(t_stack *stack_a, t_stack *stack_b, int value);
void	sort_chunk(t_stack *stack_a, t_stack *stack_b, int chunk_start, int chunk_end);
void	dump_back(t_stack *stack_a, t_stack *stack_b);

/* print.c */
void	print_error(t_stack *stack, char **args, int ac);

#endif
