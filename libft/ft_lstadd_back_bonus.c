/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:45:20 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/15 19:02:34 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(s_list **lst, s_list *new)
{
	s_list	*aux;

	if (lst)
	{
		if (*lst)
		{
			aux = ft_lstlast(*(lst));
			aux->next = new;
		}
		else
			*lst = new;
	}
}
