/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:17:25 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/18 12:38:44 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (1);
	
	ft_check_args(argc, argv);

	stack_a = (t_list **)malloc(sizeof(t_list));
	if (!stack_a)
		return (1);
	stack_b = (t_list **)malloc(sizeof(t_list));
	if (!stack_b)
		return (1);

	*stack_a = NULL;
	*stack_b = NULL;

	*stack_a = create_stack(argc, argv, stack_a);

	while (*stack_a)
		stack_sort(stack_a, stack_b);

	swap_stack(stack_a, stack_b, ft_lstlen(*stack_b));

	// printf("\n");
	// print_list(*stack_a);
	// printf("\n");
	// print_list(*stack_b);

	if (is_sorted(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (0);
	}

	sort_stack(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
}

