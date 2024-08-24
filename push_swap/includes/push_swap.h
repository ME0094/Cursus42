/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:24:27 by martirod          #+#    #+#             */
/*   Updated: 2024/08/24 16:56:49 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../libft/ft_printf/ft_printf.h"
# include <limits.h>
# include <fcntl.h>

// Stack structure
typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

/* Utility functions */
void	free_stack(t_stack **stack);
void	handle_error(t_stack **stack_a, t_stack **stack_b);
long	ft_atoi_ps(const char *str);
int		abs_val(int nb);

/* Stack management functions */
t_stack	*create_stack_node(int value);
t_stack	*initialize_stack(int argc, char **argv);
int		get_stack_size(t_stack *stack);
t_stack	*get_stack_bottom(t_stack *stack);
t_stack	*get_stack_penultimate(t_stack *stack);
void	add_node_to_stack_bottom(t_stack **stack, t_stack *new_node);
void	assign_index(t_stack *stack, int stack_size);
void	determine_target_positions(t_stack **stack_a, t_stack **stack_b);
int		find_lowest_index_position(t_stack **stack);

/* Input validation functions */
int		validate_input(char **argv, int argc);

/* Sorting functions */
void	sort_stack(t_stack **stack_a, t_stack **stack_b);
void	sort_small_stack(t_stack **stack);
int		is_stack_sorted(t_stack *stack);
void	do_move(t_stack **stack_a, t_stack **stack_b, int cost_a, int cost_b);
void	execute_cheapest_move(t_stack **stack_a, t_stack **stack_b);
void	calculate_costs(t_stack **stack_a, t_stack **stack_b);

/* Stack operation functions */
void	push_to_a(t_stack **stack_a, t_stack **stack_b);
void	push_to_b(t_stack **stack_a, t_stack **stack_b);
void	swap_a(t_stack **stack_a);
void	swap_b(t_stack **stack_b);
void	swap_both(t_stack **stack_a, t_stack **stack_b);
void	rotate_a(t_stack **stack_a);
void	rotate_b(t_stack **stack_b);
void	rotate_both(t_stack **stack_a, t_stack **stack_b);
void	reverse_rotate_a(t_stack **stack_a);
void	reverse_rotate_b(t_stack **stack_b);
void	reverse_rotate_both(t_stack **stack_a, t_stack **stack_b);

#endif