/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:24:53 by martirod          #+#    #+#             */
/*   Updated: 2024/08/23 19:55:14 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	execute_commands(char *command, t_stack **stack_a, t_stack **stack_b)
{
	if (!ft_strcmp(command, "sa\n"))
		sa(stack_a);
	else if (!ft_strcmp(command, "sb\n"))
		sb(stack_b);
	else if (!ft_strcmp(command, "pa\n"))
		pa(stack_a, stack_b);
	else if (!ft_strcmp(command, "pb\n"))
		pb(stack_a, stack_b);
	else if (!ft_strcmp(command, "ra\n"))
		ra(stack_a);
	else if (!ft_strcmp(command, "rb\n"))
		rb(stack_b);
	else if (!ft_strcmp(command, "rra\n"))
		rra(stack_a);
	else if (!ft_strcmp(command, "rrb\n"))
		rrb(stack_b);
	else if (!ft_strcmp(command, "rrr\n"))
		rrr(stack_a, stack_b);
	else if (!ft_strcmp(command, "rr\n"))
		rr(stack_a, stack_b);
	else if (!ft_strcmp(command, "ss\n"))
		ss(stack_a, stack_b);
	else
		ft_putstr("Error\n");
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*line;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2 || !is_correct_input(av, ac))
		exit_error(NULL, NULL);
	stack_a = fill_stack_values(ac, av);
	assign_index(stack_a, get_stack_size(stack_a) + 1);
	line = get_next_line(0);
	while (line != NULL)
	{
		execute_commands(line, &stack_a, &stack_b);
		free(line);
		line = get_next_line(0);
	}
	print_checker_res(stack_a, stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
