/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 00:43:38 by abuelnoor         #+#    #+#             */
/*   Updated: 2023/11/08 20:49:28 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int num)
{
	int	result;

	result = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		result = 1;
	while (num != 0)
	{
		result++;
		num /= 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*new_s;
	long	num;
	int		len;

	num = n;
	len = ft_count(num);
	new_s = (char *)malloc (len * sizeof(char) + 1);
	if (!new_s)
		return (0);
	if (num == 0)
		new_s[0] = '0';
	new_s[len] = '\0';
	if (num < 0)
	{
		new_s[0] = '-';
		num = -num;
	}
	while (num)
	{
		new_s[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (new_s);
}
// int main ()
// {
// 	char *s;
// 	s = ft_itoa(-0);
// 	printf("the final resul %s", s);
// 	return (0);
// }
