/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:33:28 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/08 00:48:50 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char *s)
{
	int		i;
	int		count;
	char	c;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			count++;
		i++;
	}
	return (count);
}

static	char	*ft_word_copy(char *s, int i)
{
	char	*p;

	p = malloc(i + 1);
	while (*s != '\0' && i > 0)
	{
		*p == *s;
		p++;
		s++;
		i--;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	*s2;
	int		i;
	int		j;
	int		words;
	int		d;

	i = 0;
	j = 0;
	d = 0;
	words = ft_word_count(s);
	s2 = malloc (sizeof(char *) * (words + 1));
	while (words > 0)
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[j] != c)
			j++;
		s2[d] = ft_word_len(&s[i], j - i);
		words--;
		d++;
	}
	free (s2);
}

int main ()
{
	int x = word_count("Hekko I am anwar", 'I');
	printf("words ccout is %d", x);
	return (0);	
}