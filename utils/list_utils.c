/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:44:29 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/16 16:39:23 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

//To get las node (i - 1) probably not necessary
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

//mabe We won't need this either
t_list	*get_i_node(t_list	*stack, int target)
{
	int	i;

	i = 0;
	while (stack != NULL)
	{	
		if (i++ == target)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}
