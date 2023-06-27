/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:44:29 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/27 18:57:07 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_lstlen(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	print_list(t_list *stack)
{
	while (stack != NULL)
	{
		printf("%d  ", stack->data);
		printf("pos = %d\n", stack->index);

		stack = stack->next;
	}
}

void	swap_stack(t_list **stack_a, t_list **stack_b, int lst_len)
{
	int	i;

	i = 0;
	while (i++ < lst_len)
		pa(stack_a, stack_b);
}

int	ft_check_args(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (1);
	else if (argc >= 2)
	{
		while (argc-- > 1)
		{
			i = 0;
			while (argv[argc][i] != '\0')
			{
				if (!(argv[argc][i] >= '0' && argv[argc][i] <= '9'))
				{
					write(1, "Error\n", 6);
					return (1);
				}
				i++;
			}
		}
	}
	return (0);
}

void	free_stack(t_list **stack_a)
{
	while (*stack_a)
	{
		free(*stack_a);
		*stack_a = (*stack_a)->next;
	}
	free(stack_a);
}

//Change in file