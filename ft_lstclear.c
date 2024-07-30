/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:53:26 by katakada          #+#    #+#             */
/*   Updated: 2024/07/30 16:58:10 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	**current_list;
	t_list	*next_list;

	if (!lst || !*lst || !del)
		return ;
	current_list = lst;
	while ((*current_list))
	{
		next_list = (*current_list)->next;
		ft_lstdelone((*current_list), del);
		(*current_list) = next_list;
	}
}
