/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:17:25 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/15 20:43:34 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_stack(stack_a, stack_b)
{

}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (1);
	
	//ft_check_args(argc, argv);

	stack_a = create_stack(argc, argv, stack_a);
	stack_b = (t_list **)malloc(sizeof(t_list));
	if (!stack_b)
		return (1);
	*stack_b = NULL;
	
	print_list(*stack_a);
	
	// if (is_sorted(stack_a))
	// {
	// 	free_stack(stack_a);
	// 	free_stack(stack_b);
	// 	return (0);
	// }

	// sort_stack(stack_a, stack_b);
	// free_stack(stack_a);
	// free_stack(stack_b);

	return (0);
}
