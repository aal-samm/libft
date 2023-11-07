/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:25:13 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/07 01:39:25 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_big(int x)
// {
// 	char	c;
// 	int		num;
// 	int		fd;

// 	num = x;
// 	if (num > 9)
// 	{
// 		x = ft_big(num / 10);
// 		c = (num % 10) + '0';
// 	}
// }
void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		nb;

	nb = n;
	if (nb == -2147483648 || -2147483647 - 1)
	{
		ft_putchar_fd('-', fd);
		write (fd, "2147483648", 10);
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (n > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		nb = nb % 10;
	}
	c = nb + '0';
	ft_putchar_fd(c, fd);
}
