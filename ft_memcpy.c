/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:01:30 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/01 15:46:48 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h> // Include this header for memory allocation

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char const	*n_src;
	char		*n_dest;

	n_src = (const char *)src;
	n_dest = (char *)dest;
	i = 0;
	if (src == 0 && dest == 0)
		return (0);
	while (i < n)
	{
		n_dest[i] = n_src[i];
		i++;
	}
	return (dest);
}
// int main ()
// {
//     char src []= "hellow world";
//     char dest [20];
//     size_t ka = 13;
//     ft_memcpy(dest, src, ka);
//     printf("the new string is: %s", dest);
//     return (0);
// }