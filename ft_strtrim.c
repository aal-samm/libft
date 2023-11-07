/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:46:51 by abuelnoor         #+#    #+#             */
/*   Updated: 2023/11/06 15:24:43 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(const char *set, char c)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*n_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_check(set, s1[start]))
		start++;
	while (end > start && ft_check(set, s1[end - 1]))
		end--;
	n_str = (char *)malloc(end - start + 1);
	if (!n_str)
		return (NULL);
	i = 0;
	while (s1[start] && start < end)
	{
		n_str[i] = s1[start];
		i++;
		start++;
	}
	n_str[i] = '\0';
	return (n_str);
}
// #include <stdio.h>
// int main ()
// {
// 	char *ptr = "+-are +- you ok daddy*-+f";
// 	char *see = "+-*";
// 	char *result = ft_strtrim(ptr, see);
// 	printf("first %s \n", ptr);
// 	printf("second %s \n", result);
// 	return (0);
// }