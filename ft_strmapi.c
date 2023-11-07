/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:36:05 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/06 23:30:12 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*new_str;
	unsigned int	i;

	if (s == 0 || f == 0)
		return (0);
	len = (unsigned int)ft_strlen(s);
	new_str = (char *)malloc (len + 1);
	if (!new_str)
		return (0);
	i = 0;
	while (i < len)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// // Define a sample mapping function that converts characters to uppercase
// char uppercase_mapping(unsigned int index, char character) {
//     if (character >= 'a' && character <= 'z') {
//         return character - 'a' + 'A'; // Convert to uppercase
//     }
//     return character; // Keep non-lowercase characters as is
// }

// int main()
// {
//     const char *inputString = "Hello, World!";

//     // Test 1: Convert characters to uppercase
//     char *result1 = ft_strmapi(inputString, uppercase_mapping);
//     if (result1 != NULL) {
//         printf("Test 1 Result: %s\n", result1);
//         free(result1);
//     } else {
//         printf("Test 1 Failed: Memory allocation error.\n");
//     }
// }