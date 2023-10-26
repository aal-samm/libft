/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:51:05 by aal-samm          #+#    #+#             */
/*   Updated: 2023/10/26 20:13:10 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*n_src;
	char		*n_dest;

	n_src = (const char *)src;
	n_dest = (char *)dst;
	if (n_src == 0 && n_dest == 0)
		return (0);
	if (n_src < n_dest)
	{
		while (len > 0)
		{
			n_dest[len - 1] = n_src[len -1];
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*n_dest++ = *n_src++;
			len--;
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