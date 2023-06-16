/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:04:57 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/16 19:50:17 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	get_max_value(t_list *stack_a)
{
	int	max;
	t_list	*aux;

	max = stack_a->data;
	aux = stack_a;
	while (stack_a != NULL)
	{
		if (stack_a->data > max)
			max = stack_a->data;
		stack_a = stack_a->next;
	}
	stack_a = aux;
	return (max);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*aux;
	int		max;
	int		dig_position;
	int		dest_index;
	int		digit;
	int		i;
	int		temp;

	max = get_max_value(*stack_a);
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	
	dig_position = 1;

	//Dig position starting with units, then 10ths, hundreds and so on
	while (max / dig_position > 0)
	{
		int count[10] = { 0 };
		max = get_max_value(*stack_a);
		aux = *stack_a;

		//Count occurances of each digit
		while (aux)
		{
			digit = (aux->data / dig_position) % 10;
			count[digit]++;
			aux = aux->next;
		}

		i = 0;
		//calculate cumulative count
		while (i++ < 9)
			count[i] += count[i - 1];
		
		//Rearange the stack elements based on current position
		aux = *stack_a;
		while (aux)
		{
			digit = (aux->data / dig_position) % 10;
			dest_index = count[digit] - 1;

			while (dest_index-- > 0)
				rotate_a(stack_a);
			
			push_a(stack_a, stack_b);
			//count[digit--];
			aux = aux->next;
		}

		//Move back to stack_a
		while (*stack_b)
		{
			temp = (*stack_b)->data;
			*stack_b = (*stack_b)->next;

			push_b(stack_a, stack_b);
		}

		dig_position *= 10;
	}
}