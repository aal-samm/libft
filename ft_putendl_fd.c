/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:04:00 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/07 00:24:41 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write (fd, s, 1);
		s++;
	}
	write (1, "\n", 1);
}
// void	ft_putendl_fd(char *s, int fd)
// {
// 	ft_putstr_fd(s, fd);
// 	ft_putchar_fd('\n', fd);
// }
