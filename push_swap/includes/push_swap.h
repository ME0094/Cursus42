/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:24:27 by martirod          #+#    #+#             */
/*   Updated: 2024/08/12 19:31:02 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../libft/ft_printf/ft_printf.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

/* Stack */

void			ft_stack_add_back(t_stack **stack, t_stack *new_node);
t_stack			*ft_stack_new(int position);
int				ft_stack_size(t_stack *head);

/* Initialization */

int				*ft_create_array_from_stack(t_stack **stack_a);
int				ft_init_stack(t_stack **stack, int argc, char **argv);

/* Validation */

long long int	ft_atoll(const char *nbr);
int				ft_validate_arg(char **tab);
int				ft_has_doubles(t_stack **stack_a);
int				ft_is_sorted(t_stack *stack_a);

/* Movements */

void			ft_sa(t_stack **stack_a);
void			ft_sb(t_stack **stack_b);
void			ft_ss(t_stack **stack_a, t_stack **stack_b);
void			ft_pa(t_stack **stack_a, t_stack **stack_b);
void			ft_pb(t_stack **stack_a, t_stack **stack_b);
void			ft_ra(t_stack **stack_a);
void			ft_rb(t_stack **stack_b);
void			ft_rr(t_stack **stack_a, t_stack **stack_b);
void			ft_rra(t_stack **stack_a);
void			ft_rrb(t_stack **stack_b);
void			ft_rrr(t_stack **stack_a, t_stack **stack_b);

/* Sorting */

int				rr_or_rrb(t_stack **stack_b, int size);
void			sorting_three_numbers(t_stack **stack_a);
int				find_minimum(t_stack *stack_a);
void			push_smallest_to_b(t_stack **stack_a, t_stack **stack_b);
void			sorting_five_numbers(t_stack **stack_a, t_stack **stack_b);
void			pushing_back_to_a(t_stack **stack_a, t_stack **stack_b, int size);
void			sorting_to_hundred(t_stack **stack_a, t_stack **stack_b, int size);
void			sorting_two_numbers(t_stack **stack_a);
void			sorting(t_stack **stack_a, t_stack **stack_b, int size);

/* Push Swap */

int				push_to_stack_a(t_stack **stack_a, char **tab);
void			get_index(t_stack **stack_a, int *tab);
void			choose_algo(t_stack **stack_a, t_stack **stack_b);
int				main(int argc, char **argv);

/* Free */

void			free_stack(t_stack **stack);
void			free_all(t_stack **stack_a, t_stack **stack_b, int *array);

/* Utils */

int				ft_tablen(char **tab);
void			sort_int_tab(int *tab, int size);
int				get_index_of_min(t_stack **stack_a);

#endif