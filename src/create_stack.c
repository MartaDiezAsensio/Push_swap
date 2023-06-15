/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:41:15 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/15 21:04:49 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*new_node(int value, int index)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	
	node->data = value;
	node->index = index;
	node->next = NULL;

	return (node);
}

void	insert_node(t_list	**top, int value, int index)
{
	t_list	*new;

	new = new_node(value, index);
	
	new->next = *top;
	*top = new;
}

t_list	*create_stack(int argc, char **argv, t_list **stack)
{
	int		index;

	index = 0;
	while ((argc - 1) > 0)
		insert_node(stack, ft_atoi(argv[--argc]), index++);
	
	return (*stack);
}

