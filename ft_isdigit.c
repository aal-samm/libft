/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:04:55 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/08 20:39:36 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int x)
{
	if (x >= '0' && x <= '9')
		return (1);
	else
		return (0);
}

/*int main ()
{
    char z = '8';

    if (ft_isdigit(z))
        printf("the charecter %c is  digit ", z);
    else 
        printf("the charecter %c is nooooo way", z);
    return 0;
    
}*/