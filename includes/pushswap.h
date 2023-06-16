/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:15:15 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/16 16:38:43 by mdiez-as         ###   ########.fr       */
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
t_list	*get_i_node(t_list	*stack, int target);
int	ft_lstlen(t_list *lst);


//Src Functions

//Create stack
t_list	*new_node(int value, int index);
void	insert_node(t_list	**top, int value, int index);
t_list	*create_stack(int argc, char **argv, t_list **stack);

//Operations
void	swap_a(t_list	**stack_a);
void	push_a(t_list	**stack_a , t_list	**stack_b);
void	push_b(t_list	**stack_a , t_list	**stack_b);
void	rotate_a(t_list **stack_a);
void	reverse_rotate_a(t_list **stack_a);

#endif