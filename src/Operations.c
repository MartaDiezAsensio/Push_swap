/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:10:53 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/29 11:39:00 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

// Swapping two firsst elements of a stack

int	swap(t_list **stack)
{
	t_list	*head;
	t_list	*next;
	int		aux_data;
	int		aux_index;

	if (ft_lstlen(*stack) < 2)
		return (-1);
	head = *stack;
	next = head->next;
	// if (!head && !next)
	// 	ft_error("Error occured when swapping"); //Function to be added
	aux_data = head->data;
	aux_index = head->index;
	head->data = next->data;
	head->index = next->index;
	next->data = aux_data;
	next->index = aux_index;
	return (0);
}

int	sa(t_list	**stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}
int	sb(t_list	**stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ss(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstlen(*stack_a) < 2) || (ft_lstlen(*stack_b) < 2))
		return (-1);
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
	return (0);
}

// Take first element of one stack and put it on top of another one (index ignored)

int	push(t_list **stack_from, t_list **stack_to)
{
	t_list	*aux;
	t_list	*head_to;
	t_list	*head_from;

	if (ft_lstlen(*stack_from) == 0)
		return (-1);
	head_to = *stack_to;
	head_from = *stack_from;
	aux = head_from;
	head_from = head_from->next; //Try to simplify these lines
	*stack_from = head_from;
	if (!head_to)
	{
		head_to = aux;
		head_to->next = NULL;
		*stack_to = head_to; //Add index = 0?
	}
	else
	{
		aux->next = head_to;
		*stack_to = aux;
	}
	return (0);
}

int	pa(t_list	**stack_a, t_list **stack_b) //check if the order is OK
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_list	**stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}

// Shift up all elements of a stack by 1 (First element becomes the last one) (Inddex ignored)

int	rotate(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_lstlen(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_last(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int	ra(t_list **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	rb(t_list **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

int	rr(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstlen(*stack_a) < 2) || (ft_lstlen(*stack_b) < 2))
		return (-1);
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
	return (0);
}

// Shift down all elements of a stack by 1 (Last element becomes the first one) (Index ignored)

int	reverseRotate(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_lstlen(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_last(head);
	while (head)
	{
		if (head->next == NULL)
		{
			head->next = NULL; //Could this line be ommited?
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}

int rra(t_list **stack_a)
{
	if (reverseRotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int rrb(t_list **stack_b)
{
	if (reverseRotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	rrr(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstlen(*stack_a) < 2) || (ft_lstlen(*stack_b) < 2))
		return (-1);
	reverseRotate(stack_a);
	reverseRotate(stack_b);
	ft_putendl_fd("rrr", 1);
	return (0);
}
