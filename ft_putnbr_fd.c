/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:25:13 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/07 22:40:51 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	nb;

	nb = n;
	if (nb == -2147483648)
	{
		ft_putchar_fd ('-', fd);
		ft_putstr_fd ("2147483648", fd);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}

// void	ft_putnbr_fd(int n, int fd)
// {
// 	if (n == -2147483648)
// 		ft_putstr_fd("-2147483648", fd);
// 	else
// 	{
// 		if (n < 0)
// 		{
// 			ft_putchar_fd('-', fd);
// 			n = n * -1;
// 		}
// 		if (n >= 9)
// 		{
// 			ft_putnbr_fd(n / 10, fd);
// 		}
// 		ft_putchar_fd((n % 10) + '0', fd);
// 	}
// }
