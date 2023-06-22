/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:10:53 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/22 14:44:27 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_list	**stack_a)
{
	t_list	*first;
	t_list	*second;
	int		aux;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;

	first = *stack_a;
	second = (*stack_a)->next;

	first->next = second->next;
	second->next = first;
	*stack_a = second;

	aux = first->index;
	first->index = second->index;
	second->index = aux;
}

void	pa(t_list	**stack_a , t_list	**stack_b)
{
	t_list	*aux;

	if (*stack_b == NULL)
		return ;
	
	aux = *stack_b;
	*stack_b = (*stack_b)->next;
	aux->next = *stack_a;
	*stack_a = aux;

	if ((*stack_a)->next)
		(*stack_a)->index = (*stack_a)->next->index + 1;
	else
		(*stack_a)->index = 0;
}

void	ra(t_list **stack_a)
{
	t_list	*last;
	t_list	*prev;
	int		aux;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	
	last = *stack_a;
	aux = last->index;
	prev = NULL;

	while (last->next)
	{
		prev = last;
		last->index = last->index - 1;
		last = last->next;
	}
		
	last->next = *stack_a;
	*stack_a = last;
	(*stack_a)->index = aux;
	prev->next = NULL;
}

void	rra(t_list **stack_a)
{
	t_list	*aux;
	t_list	*head;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;

	aux = *stack_a;
	head = *stack_a;
	*stack_a = aux->next;

	while (aux->next)
	{
		aux = aux->next;
		aux->index = aux->index + 1;
	}

	head->index = 0;
	aux->next = head;
	head->next = NULL;
}
