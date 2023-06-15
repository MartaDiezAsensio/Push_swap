/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:15:15 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/15 18:50:02 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

# include "../libft/libft.h"

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}					t_list;

//Util Functions
void	print_list(t_list *stack);


//Src Functions

//Create stack
t_list	*new_node(int value, int index);
void	insert_node(t_list	**top, int value, int index);
t_list	**create_stack(int argc, char **argv, t_list **stack);


#endif