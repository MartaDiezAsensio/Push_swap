/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:44:29 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/15 18:45:59 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *stack)
{
	while (stack != NULL)
	{
		printf("%d  ", stack->data);
		printf("pos = %d\n", stack->index);

		stack = stack->next;
	}
}