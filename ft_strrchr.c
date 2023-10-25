/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:55:36 by aal-samm          #+#    #+#             */
/*   Updated: 2023/10/25 16:23:09 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s);
	while (len >= 0)
	{
		if (s[len] == c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}
// #include <stdio.h>

// int main ()
// {
// 	char s[] = "I want that way";
// 	char c = '\0';

// 	printf("%s", ft_strrchr(s, c));
// 	return (0);
// }