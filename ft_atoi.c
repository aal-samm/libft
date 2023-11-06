/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuelnoor <abuelnoor@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:22:11 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/06 01:29:34 by abuelnoor        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	int sign;
	int i;
	int result;

	i = 0;
	result = 0;
	while (nptr[i] != '\0' && (nptr[i] == ' ' ||  (nptr[i] >= 9 && nptr[i] <= 13)))
		i++;
	if (nptr[i] == '-')
		{
			sign = -1;
			i++;
		} else if (nptr[i] == '+')
		{
			sign = 1;
			i++;
		}
	while (nptr[i] != '\0' && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

/*#include <stdio.h>
int main (){
	char pr[] = "-2+-23fwe12";
	int i = atoi (pr);
	int sec = ft_atoi(pr);
	printf("expected:%d \n", i);
	printf("my result is :%d \n", sec);
	return (0);
}*/