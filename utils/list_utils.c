/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:44:29 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/18 12:41:33 by mdiez-as         ###   ########.fr       */
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

void	swap_stack(t_list **stack_a, t_list **stack_b, int lst_len)
{
	int	i;

	i = 0;
	while (i++ < lst_len)
		pa(stack_a, stack_b);
}

int	ft_check_args(int argc, char **argv)
{

}

void	free_stack(t_list **stack_a)
{

}
