/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:33:46 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/02 20:19:54 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*sub_str;
	unsigned int	new_size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_calloc (1, 1));
	new_size = ft_strlen(&s[start]);
	i = 0;
	if (new_size > len)
		sub_str = ft_calloc (len + 1, 1);
	else
		sub_str = ft_calloc(new_size + 1, 1);
	if (!sub_str)
		return (0);
	while (i < len && s[start + i])
	{
		sub_str[i] = s[start + i];
		i++;
	}
	return ((char *)sub_str);
}
// #include <stdio.h>
// int main ()
// {
// 	char const *str = "hola";
// 	size_t size = 20;
// 	char *ret = ft_substr(str, 5, 0);
// 	printf("%s", ret);
// 	return (0);
// }

// you can use ft_strdup("") to copy a null terminate memory.