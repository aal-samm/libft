/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:17:09 by aal-samm          #+#    #+#             */
/*   Updated: 2023/10/24 20:31:50 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

void	*ft_bzero(void *ptr, size_t num);
int		ft_isalnum(int x);
int		ft_istalpha(int x);
int		ft_isascii(int g);
int		ft_isdigit(int x);
int		ft_isprint(int x);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *ptr, int value, size_t num);
size_t	ft_strlcat(char *restrict dst, const char *restrict src,
			size_t dstsize);
size_t	ft_strlcpy(char	*restrict dst, const char *restrict src,
			size_t dstsize);
int		ft_strlen(char *s);

#endif