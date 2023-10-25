/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:51:05 by aal-samm          #+#    #+#             */
/*   Updated: 2023/10/24 22:34:08 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char const	*n_src;
	char		*n_dest;

	n_src = (const char *)src;
	n_dest = (char *)dst;
	if (n_src < n_dest)
	{
		while (len > 0) // -1??
		{
			n_dest[len] = n_src[len];
			len--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			n_dest[i] = n_src[i];
			i++;
		}
	}
	return (dst);
}

// #include <stdio.h>
// int	main()
// {
// 	char s[] = "helloe work";
// 	char h[20];
// 	ft_memmove(h, s, 8);
// 	printf("fhsjfh is: %s",h);
// 	return (0);
// }