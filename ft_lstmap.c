/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katakada <katakada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:53:54 by katakada          #+#    #+#             */
/*   Updated: 2024/07/30 16:28:06 by katakada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapped_new_list;
	t_list	*target_list;
	t_list	*next_list;
	void	*next_content;

	if (!lst || !f || !del)
		return (NULL);
	mapped_new_list = NULL;
	target_list = lst;
	while (target_list)
	{
		next_content = f(target_list->content);
		next_list = ft_lstnew(next_content);
		if (!next_list)
		{
			del(next_content);
			ft_lstclear(&mapped_new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&mapped_new_list, next_list);
		target_list = target_list->next;
	}
	return (mapped_new_list);
}
