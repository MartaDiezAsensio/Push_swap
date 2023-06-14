/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:09:12 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/14 20:29:30 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

t_list	**ft_lstnew(int data)
{
	t_list	**res;

	res = (t_list **)malloc(sizeof(t_list));
	if (!(res))
		return (NULL);
	(*res)->data = data;
	(*res)->next = NULL;
	return (res);
}

void	initStack(t_list **stack_a, int argc, char **argv)
{
	int	data;
	int	index;

	index = argc -1;
	while (argc != 0)
	{
		data = ft_atoi(argv[argc--]);
		stack_a = ft_lstnew(data);
		(*stack_a)->index = index--;
		(*stack_a)->next = *stack_a;
	}
	(*stack_a)->next = NULL;
}

void	ft_lstiter_print(t_list **lst)
{
	while (lst)
	{
		printf("%d  ", (*lst)->data);
		lst = &(*lst)->next;
	}
}

int	main(int argc, char **argv)
{
	t_list **stack_a;

	stack_a = (t_list **)malloc(sizeof(t_list));
	if (!stack_a)
	{
		printf("Error\n");
		return (0);
	}

	initStack(stack_a, argc, argv);

	ft_lstiter_print(stack_a);
}