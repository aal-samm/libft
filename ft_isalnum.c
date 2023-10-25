/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:51:53 by aal-samm          #+#    #+#             */
/*   Updated: 2023/10/23 17:44:00 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')
		|| (x >= '0' && x <= '9'))
		return (1);
	return (0);
}

/*int main ()
{
    char c = '!';
    if (ft_isalnum(c))
        printf("the thing %c is accepted", c);
    else 
        printf("dsfdsf %c", c);
    return 0;
}*/