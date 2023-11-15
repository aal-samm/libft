/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:18:07 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/15 19:48:32 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*p;
	t_list	*new_nod;
	t_list	*new_lst;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		p = f(lst->content);
		new_nod = ft_lstnew(p);
		if (!new_nod)
		{
			del(p);
			ft_lstclear (&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_nod);
		lst = lst->next;
	}
	return (new_lst);
}
