/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:31:32 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/01 21:20:17 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*n_mem;

	i = 0;
	n_mem = malloc(count * size);
	if (!n_mem)
		return (0);
	while (i < (count * size))
	{
		n_mem[i] = 0;
		i++;
	}
	return ((void *)n_mem);
}
// #include <stdio.h>
// int main ()
// {
// 	size_t c = 4;
// 	size_t s = 4;

// 	printf("fddff %zu",(void *)ft_calloc(4,4));

// 	return (0);
// }
