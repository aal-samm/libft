/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:50:10 by aal-samm          #+#    #+#             */
/*   Updated: 2023/10/24 20:29:23 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	v;

	i = 0;
	p = (unsigned char *)ptr;
	v = (unsigned char)value;
	while (i < num)
	{
		p[i] = v;
		i++;
	}
	return (ptr);
}
