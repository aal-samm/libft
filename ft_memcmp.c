/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:28:00 by aal-samm          #+#    #+#             */
/*   Updated: 2023/10/25 17:07:41 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//DESCRIPTION:The memcmp() function compares byte string s1 against byte 
//string s2 //Both strings are assumed to be n bytes long.

// RETURN VALUES
//The memcmp() function returns zero if the two strings are identical,//otherwisereturns the difference between the first two differing bytes
//(treated as unsigned char values, so that `\200' is greater than `\0', for example).  Zero-
//length strings are always identical.  This behavior is not required by C and portable code should only depend on the sign of the returned value.

int	memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*f_st;
	const unsigned char	*s_st;
	size_t				i;

	f_st = (const unsigned char *)s1;
	s_st = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (f_st[i] > s_st[i])
			return (+1);
		else if (f_st[i] < s_st[i])
			return (-1);
		i++;
	}
	return (0);
}
