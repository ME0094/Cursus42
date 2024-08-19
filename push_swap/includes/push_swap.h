/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:24:27 by martirod          #+#    #+#             */
/*   Updated: 2024/08/19 20:16:08 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../libft/ft_printf/ft_printf.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

void				ft_add_back_s(t_stack **lst, t_stack *new);
t_stack				*ft_new_stack(int n);
int					ft_validate_argument(char **tab);
int					is_sorted(t_stack **stack_a);
int					ft_tablen(char **tab);

int					has_duplicates(t_stack **stack_a);
int					initialize_stack(t_stack **stack_a, int argc, char **argv);
int					push_to_a(t_stack **stack_a, char **argv);
void				ft_sa(t_stack **stack_a);
void				ft_sb(t_stack **stack_b);
void				ft_ss(t_stack **stack_a, t_stack **stack_b);
void				ft_pa(t_stack **stack_a, t_stack **stack_b);
void				ft_pb(t_stack **stack_a, t_stack **stack_b);
void				ft_ra(t_stack **stack_a);
void				ft_rb(t_stack **stack_b);
void				ft_rr(t_stack **stack_a, t_stack **stack_b);
void				ft_rra(t_stack **stack_a);
void				ft_rrb(t_stack **stack_b);
void				ft_rrr(t_stack **stack_a, t_stack **stack_b);

int					find_minimum_index(t_stack **stack_a);
void				sort_two(t_stack **stack_a);
void				sort_three(t_stack **stack_a);
int					find_min(t_stack *stack_a);
int					find_max(t_stack *stack_a);
void				choose_algo(t_stack **stack_a, t_stack **stack_b);
void				sorting_five_numbers(t_stack **stack_a, t_stack **stack_b);
int					ft_lstsize(t_stack *lst);
void				pushing_back_to_a(t_stack **stack_a, t_stack **stack_b,
						int size);
void				sorting_to_hundred(t_stack **stack_a, t_stack **stack_b,
						int size);
void				sorting(t_stack **stack_a, t_stack **stack_b, int size);
void				free_all(t_stack **stack_a, t_stack **stack_b, int *tab);
void	free_stack(t_stack **stack);
void				sort_int_tab(int *tab, int size);
int *create_tab(t_stack *stack_a);
int					rb_or_rrb(t_stack **stack_b, int size);

long long int	ft_atoll(char *nbr, t_stack **a, char **t);

#endif