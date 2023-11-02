/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:17:51 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/01 18:56:50 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	if (*haystack == 0 || len == 0)
		return (0);
	while (haystack && i < len)
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
// 	// const char	h[] = "I am that old sdfdsf";
// 	// const char	n[] = "old";
// 	// char		*result;
// 	const char	*s1 = "";
//     const char	*s2 = "empty";

// 	size_t max = strlen(s1);
// 	char *i1 = strnstr(s1, s2, 10);
// 	char *i2 = ft_strnstr(s1, s2, 10);

// 	// result = ft_strnstr(h, n, 22);
// 	printf("the result 1 is: %s\n", i1);
// 	printf("the result 2 is: %s\n",i2);
// 	return (0);
// }
