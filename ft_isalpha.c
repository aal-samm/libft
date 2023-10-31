/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:37:57 by aal-samm          #+#    #+#             */
/*   Updated: 2023/10/31 16:30:09 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>
int main ()
{
    char  d = 'Q';
    if (ft_istalpha ( d))
        printf("%c this char is alphabet..\n", d);
    else 
        printf("%c this charcter is not alpha \n", d);
    return 0;
}*/