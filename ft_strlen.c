/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:28:21 by aal-samm          #+#    #+#             */
/*   Updated: 2023/10/31 21:05:34 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
// #include <stdio.h>
// int main ()
// {
//     char d[] = "1";
//     int x = ft_strlen(d);
//     printf("it %d chaecters", x);
//     return 0;
// }