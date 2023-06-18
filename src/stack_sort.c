/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:24:20 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/18 12:24:25 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_opt(t_list *min, t_list **stack_a, t_list **stack_b, int lst_len)
{
	if (min->index == lst_len)
	{
		pa(stack_b, stack_a);
		printf("%s", "pb\n");
	}
	else if (min->index == lst_len - 1)
	{
		rra(stack_a);
		printf("%s", "rra\n");
		pa(stack_b, stack_a);
		printf("%s", "pb\n");
	}
	else
	{
		while (min->index != lst_len)
		{
			ra(stack_a);
			printf("%s", "ra\n");
		}
		pa(stack_b, stack_a);
		printf("%s", "pb\n");
	}
}

void	stack_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*min;
	t_list	*aux_a;
	int		lst_len;

	(void)stack_b;

	lst_len = ft_lstlen(*stack_a) - 1;
	min = *stack_a;
	aux_a = *stack_a;
	while (aux_a)
	{
		if (aux_a->data < min->data)
			min = aux_a;
		aux_a = aux_a->next;
	}
	sort_opt(min, stack_a, stack_b, lst_len);
}
