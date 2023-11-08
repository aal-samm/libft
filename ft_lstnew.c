/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:13:01 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/09 00:05:25 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n_nod;

	n_nod = (t_list *)malloc(sizeof(t_list));
	if (!n_nod)
		return (NULL);
	n_nod -> content = content;
	n_nod -> next = NULL;
	return (n_nod);
}
// int main()
// {
// 	t_list *lst;
// 	int num = 42;

// 	lst = ft_lstnew(&num);
// 	if (lst == NULL)
// 	{
// 		printf("Failed to create new list element.\n");
// 		return 1;
// 	}
// 	printf("The content of the list element is: %d\n", *(int *)lst->content);

// 	free(lst);
// 	return 0;
// }
