/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:24:27 by martirod          #+#    #+#             */
/*   Updated: 2024/08/20 17:57:29 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../libft/ft_printf/ft_printf.h"
# include <limits.h>
# include <fcntl.h>

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

// Utils

void		free_stack(t_stack **stack);
void		exit_error(t_stack **stack_a, t_stack **stack_b);
long int	ft_atoi_ps(const char *str);
void		ft_putstr_ps(char *str);
int			nb_abs(int nb);

// Stack functions

t_stack		*stack_new(int value);
t_stack		*fill_stack_values(int ac, char **av);
int			get_stack_size(t_stack	*stack);
t_stack		*get_stack_bottom(t_stack *stack);
t_stack		*get_stack_before_bottom(t_stack *stack);
void		stack_add_bottom(t_stack **stack, t_stack *new);
void		assign_index(t_stack *stack_a, int stack_size);
void		get_target_position(t_stack **a, t_stack **b);
int			get_lowest_index_position(t_stack **stack);

// Checking the input

int			is_correct_input(char **av, int ac);
int			is_digit(char c);
int			is_sign(char c);

// Sorting

void		sort(t_stack **stack_a, t_stack **stack_b);
void		tiny_sort(t_stack **stack);
int			is_sorted(t_stack *stack);
void		do_move(t_stack **a, t_stack **b, int cost_a, int cost_b);
void		do_cheapest_move(t_stack **stack_a, t_stack **stack_b);
void		get_cost(t_stack **stack_a, t_stack **stack_b);

// Movements

void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		rra(t_stack **stack_a);
void		rrb(t_stack **stack_b);
void		rrr(t_stack **stack_a, t_stack **stack_b);

#endif