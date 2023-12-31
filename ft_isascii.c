/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:00:20 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/08 20:39:26 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int g)
{
	if (g >= 0 && g <= 127)
		return (1);
	return (0);
}

/* int ft_isascii(int c) 
{
    return (c >= 0 && c <= 127);
}
*/
/*int main ()
{
    char s = '\xC9';
    if (ft_isascii(s))
        printf("yes %c is ascii", s);
    else 
        printf("no %c is noy ascii", s);
        return 0;

}*/