/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:17:25 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/29 11:34:21 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	//trivial case argc == 2 to be dismissed?
	if (argc < 2)
		return (1);
	
	if (ft_check_args(argc, argv))
		return (1);

	stack_a = (t_list **)malloc(sizeof(t_list));
	if (!stack_a)
		return (1);
	stack_b = (t_list **)malloc(sizeof(t_list));
	if (!stack_b)
		return (1);

	*stack_a = NULL;
	*stack_b = NULL;

	*stack_a = create_stack(argc, argv, stack_a);

	if (is_sorted(stack_a))
		return (0);

	// while (*stack_a)
	// 	stack_sort(stack_a, stack_b);
	
	// swap_stack(stack_a, stack_b, ft_lstlen(*stack_b));

	sa(stack_a);
	// sb(stack_b);
	// ss(stack_a, stack_b);
	// pa(stack_a, stack_b);
	// pb(stack_b, stack_a);
	// ra(stack_a);
	// rb(stack_b);
	// rr(stack_a, stack_b);
	// rra(stack_a);
	// rrb(stack_b);
	// rrr(stack_a, stack_b);

	printf("\n");
	print_list(*stack_a);
	printf("\n");
	print_list(*stack_b);

	if (is_sorted(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (0);
	}
}

