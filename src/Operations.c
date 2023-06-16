/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:10:53 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/16 16:39:00 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	swap_a(t_list	**stack_a)
{
	t_list	*first;
	t_list	*second;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;

	first = *stack_a;
	second = (*stack_a)->next;

	first->next = second->next;
	second->next = first;
	*stack_a = second;
}

// void	swap_b(int a , int b);

void	push_a(t_list	**stack_a , t_list	**stack_b)
{
	t_list	*aux;

	if (*stack_b == NULL)
		return ;
	
	aux = *stack_b;
	*stack_b = (*stack_b)->next;

	aux->next = *stack_a;
	*stack_a = aux;
}

//Move poiner to head too

void	push_b(t_list	**stack_a , t_list	**stack_b)
{
	t_list	*aux;

	if (*stack_a == NULL)

		return ;
	
	aux = *stack_a;
	*stack_a = (*stack_a)->next;

	aux->next = *stack_b;
	*stack_b = aux;
}

void	rotate_a(t_list **stack_a)
{
	t_list	*last;
	t_list	*prev;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	
	last = *stack_a;
	prev = NULL;

	while (last->next)
	{
		prev = last;
		last = last->next;
	}
		
	last->next = *stack_a;
	*stack_a = last;
	prev->next = NULL;
}

// void	rotate_b(t_list stack)

void	reverse_rotate_a(t_list **stack_a)
{
	t_list	*aux;
	t_list	*head;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;

	aux = *stack_a;
	head = *stack_a;
	*stack_a = aux->next;

	while (aux->next)
		aux = aux->next;

	aux->next = head;
	head->next = NULL;
}

// void	revere_rotate_b(t_list stack)
