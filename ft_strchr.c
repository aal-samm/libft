/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:09:56 by aal-samm          #+#    #+#             */
/*   Updated: 2023/10/24 22:27:15 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len;

	len = ft_strlen((char *)s);
	i = 0;
	while (i <= len)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>

// int main ()
// {
// 	char s[] = "I want that way";
// 	char c = 't';

// 	printf("%s", ft_strchr(s, c));
// 	return (0);
// }
