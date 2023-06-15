/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:17:25 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/15 18:46:39 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(void *content);
void	initStack(t_list *stack_a, int argc, char **argv)
{
	int	data;
	while (argc != 0)
	{
		data = ft_atoi(argv[argc--]);
		stack_a = ft_lstnew(&data);
	}
}

void	sort_stack(stack_a, stack_b)
{

}

int	main(int argc, char **argv)
{
	//** para poder recorrer el stack
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (1);
	
	ft_check_args(argc, argv); //void?

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


// int	main(int argc, char **argv)
// {
// 	t_list	**stack_a;

// 	stack_a = create_stack(argc, argv, stack_a);
	
// 	print_list(*stack_a);
// }