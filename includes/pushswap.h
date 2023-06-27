/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:15:15 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/27 20:29:45 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSHSWAP_H
# define PUSHSWAP_H

# include "../libft/libft.h"

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct t_list
{
	int				data;
	int				index;
	struct t_list	*next;
}					t_list;

//Util Functions
void	print_list(t_list *stack);
int		ft_lstlen(t_list *lst);
void	swap_stack(t_list **stack_a, t_list **stack_b, int lst_len);
int		ft_check_args(int argc, char **argv);
void	free_stack(t_list **stack_a);

//Create stack
t_list	*new_node(int value, int index);
void	insert_node(t_list	**top, int value, int index);
t_list	*create_stack(int argc, char **argv, t_list **stack);

//Operations
int		swap(t_list **stack);
int		push(t_list **stack_to, t_list **stack_from);
int		rotate(t_list **stack);
int		reverseRotate(t_list **stack);

int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_b, t_list **stack_a);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);

//Soting
void	stack_sort(t_list **stack_a, t_list **stack_b);
void	sort_opt(t_list *min, t_list **stack_a, t_list **stack_b, int lst_len);
int	is_sorted(t_list **stack_a);


int	get_max_bits(t_list **stack);
#endif
