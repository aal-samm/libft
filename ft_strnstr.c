/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:17:51 by aal-samm          #+#    #+#             */
/*   Updated: 2023/10/31 22:03:53 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle)
		return ((char *)haystack);
	if (!haystack || len == 0)
		return ((char *)haystack);
	while (haystack)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < len
			&& needle[j] && haystack[i + j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char		*result;
// 	const char	h[] = "I am that old sdfdsf";
// 	const char	n[] = "old";
// 	const char *s1 = "oh no not the empty string !";
//         const char *s2 = "";
//         size_t max = strlen(s1);
//         char *i1 = strnstr(s1, s2, max);
//         char *i2 = ft_strnstr(s1, s2, max);

// 	result = ft_strnstr(h, n, 22);
// 	printf("the result is: %s\n", i1);
// 	printf("the result is: %s",i2);
// 	return (0);
// }
