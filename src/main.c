/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:17:25 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/14 19:34:40 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	//** para poder recorrer el stack
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (1);
	
	ft_check_args(argc, argv);

	stack_a = (t_list **)malloc(sizeof(t_list));
	if (!stack_a)
	{
		printf("Error in stack a");
		return (1);
	}
	stack_b = (t_list **)malloc(sizeof(t_list));
	if (!stack_b)
	{
		printf("Error in stack b");
		return (1);
	}

	*stack_a = NULL;
	*stack_b = NULL;

	initStack(stack_a, argc, argv);

	if (is_sorted(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (0);
	}

	sort_stack(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);

	return (0);
}