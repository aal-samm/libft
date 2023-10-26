/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:28:00 by aal-samm          #+#    #+#             */
/*   Updated: 2023/10/25 20:45:30 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*f_st;
	const unsigned char	*s_st;
	size_t				i;

	f_st = (const unsigned char *)s1;
	s_st = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (f_st[i] != s_st[i])
			return (f_st[i] - s_st[i]);
		i++;
	}
	return (0);
}
