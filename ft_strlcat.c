/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:09:01 by aal-samm          #+#    #+#             */
/*   Updated: 2023/10/24 19:13:42 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src,
	size_t dstsize)
{
	size_t	j;
	size_t	i;
	size_t	src_l;
	size_t	des_l;

	src_l = ft_strlen((char *)src);
	des_l = ft_strlen(dst);
	j = des_l;
	i = 0;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	if (dstsize <= des_l)
		return (dstsize + src_l);
	else
		return (src_l + des_l);
}

// #include <stdio.h>

// int main()
// {
// 	char	src[] = "12345";
// 	char	dst[] = "78910";
// 	int		x =  ft_strlcat(dst, src, 30);
// 	printf("%i", x);
// 	return (0);
// }