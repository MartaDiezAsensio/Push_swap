/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:33:11 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/14 20:46:11 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct	s_list
{
	int				data;
	struct t_list	*next;
}				t_list;

t_list	*createNode(int data)
{
	t_list	*num;

	num = (t_list *)malloc(sizeof(t_list));
	if (!num)
		return (NULL);
	
	num->data = data;
	num->next = NULL;

	return (num);
}

t_list	*createList(int argc, char **argv, t_list **stack_a)
{
	t_list	*bottom;
	t_list	*top;

	bottom = stack_a[0];
	top = stack_a[1];
}