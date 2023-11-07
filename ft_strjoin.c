/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:07:13 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/06 15:23:39 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*join;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join = (char *)malloc((len1 + len2 + 1) * 1);
	if (!join)
		return (0);
	ft_strlcpy(join, s1, len1 + len2 + 1);
	ft_strlcpy(&join[len1], s2, len2 + 1);
	join[len1 + len2] = '\0';
	return ((void *)join);
}

// #include <stdio.h>
// int main ()
// {
// 	char *s1 = "p";
// 	char *s2 = " pae";
// 	char *j = ft_strjoin(s1, s2);
// 	size_t d = ft_strlen(j);
// 	printf("the result is %s\n", j);
// 	printf("the result is %zu\n", d);
// 	return (0);
// }

//could also work with 	// strcpy(join, s1); strcpy(&join[len1], s2);
//  but you should include #include <string.h>
