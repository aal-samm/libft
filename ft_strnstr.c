/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:17:51 by aal-samm          #+#    #+#             */
/*   Updated: 2023/10/26 23:37:09 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//     If needle is an empty string, haystack is returned;
//  if needle occurs nowhere in haystack, NULL is returned; 
//  otherwise a pointer to the first character of the first occurrence of needle is returned.
char	*strstr(const char *haystack, const char *needle)
{
	int i;
	
	i = 0;
	if (needle == 0)
		return (haystack);
		
	while (needle[i] != '\0')
	{
		if (needle[i] == haystack[i])
		{
				
		}
	} 
}	