/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:33:29 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/09 21:12:10 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst || ! new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
}

// #include "stdio.h"

// int main(void)
// {

// 	char *s1, *s2;
// 	t_list *lst;
// 	int i;
// 	t_list *p;

// 	s1 = "first";
// 	s2 = "second";

// 	lst = ft_lstnew(s1);
// 	ft_lstadd_back(&lst, ft_lstnew(s2));

// 	p = lst;

// 	printf("%p | %p\n", lst, p);
// 	i = 0;
// 	while (p)
// 	{
// 		printf("%s\n", p->content);
// 		p = p->next;
// 	}
// 	printf("%p | %p\n", lst, p);
// }
	// if (!lst || ! new)
	// 	return ;
	// if (!(*lst))
	// {
	// 	*lst = new;
	// 	return ;
	// }
	// while ((*lst)->next)
	// 	*lst = (*lst)->next;
	// (*lst)->next = new;