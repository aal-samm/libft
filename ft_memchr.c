/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:53:04 by aal-samm          #+#    #+#             */
/*   Updated: 2023/10/25 16:27:14 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The memchr() function locates the first occurrence of c
 (converted to an unsigned char) in string s.
RETURN VALUES; //The memchr() function returns
a pointer to the byte located, or NULL if no such byte exists within n bytes.*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s; // shoud i cast or cnvert int to unsigned char
	i = 0;
	while (i < n)
	{
		if (ptr[i] == c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>

// int main ()
// {
// 	char s[] = "I want theat way";
// 	char c = 'e';

// 	printf("%s", ft_memchr(s, c, 18));
// 	return (0);
// }