/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:15:15 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/18 12:42:07 by mdiez-as         ###   ########.fr       */
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
void	sa(t_list	**stack_a);
void	pa(t_list	**stack_a , t_list	**stack_b);
void	ra(t_list **stack_a);
void	rra(t_list **stack_a);

//Soting
void	stack_sort(t_list **stack_a, t_list **stack_b);
void	sort_opt(t_list *min, t_list **stack_a, t_list **stack_b, int lst_len);
int	is_sorted(t_list **stack_a);

#endif
