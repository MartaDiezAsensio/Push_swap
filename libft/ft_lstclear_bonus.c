/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:09:55 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/06/15 19:02:39 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(s_list **lst, void (*del)(void *))
{
	s_list	*aux;

	aux = *lst;
	if (lst)
	{
		while (*lst)
		{
			aux = aux->next;
			ft_lstdelone(*lst, del);
			(*lst) = aux;
		}
	}
}
