/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:24:20 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/24 19:52:26 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

//revise
void	sort_triv(t_list *min, t_list **stack_a, t_list **stack_b, int lst_len)
{
	if ( lst_len == 2)
	{
		if (min->index == lst_len)
			rra(stack_a);
	}
	else if (lst_len == 3)
	{
		if (min->index == lst_len)
		{
			if (min->next->index == lst_len - 1)
				rra(stack_a);
		}
		else if (min->index == lst_len -1)
		{
			rra(stack_a);
		}
		else
		{
			rra(stack_a);
			rra(stack_a);
		}

	}
}

void	sort_opt(t_list *min, t_list **stack_a, t_list **stack_b, int lst_len)
{
	if (min->index == lst_len - 1)
	{
		rra(stack_a);
		printf("%s", "rra\n");
		// pa(stack_b, stack_a);
		// printf("%s", "pb\n");
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

int	is_sorted(t_list **stack_a)
{
	t_list	*aux;

	aux = *stack_a;
	while (aux->next)
	{
		if (aux->data > aux->next->data)
			return (0);
		aux = aux->next;
	}
	return (1);
}