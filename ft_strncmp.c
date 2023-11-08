/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:51:32 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/08 21:02:56 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)(&s1[i]) - *(unsigned char *)(&s2[i]));
}
// #include <stdio.h>

// int main ()
// {
// 	const char *str1 = "apsle";
// 	const char *str2 = "apsicot";
// 	int result = ft_strncmp(str1, str2, 3);
// 	printf("%d", result);
// 	return (0);
// }