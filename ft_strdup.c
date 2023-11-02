/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:06:04 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/02 00:02:49 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*n_mem;

	i = 0;
	len = ft_strlen(s1);
	n_mem = malloc(len + 1);
	if (!n_mem)
		return (0);
	while (i < len)
	{
		n_mem[i] = s1[i];
		i++;
	}
	n_mem[i] = '\0';
	return ((char *)n_mem);
}
