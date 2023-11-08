/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuelnoor <abuelnoor@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:33:28 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/08 04:03:17 by abuelnoor        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			count++;
		i++;
	}
	return (count);
}

static	char	*ft_word_copy(char *s, int n)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc(n + 1);
	if (!p)
		return (NULL);
	while (s[i] != '\0' && i < n)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**s2;
	int		i;
	int		j;
	int		words;
	int		d;

	i = 0;
	j = 0;
	d = 0;
	words = ft_word_count(s, c);
	s2 = malloc (sizeof(char *) * (words + 1));
	if (!s2)
		return (NULL);
	while (words > 0)
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[j] != c && s[j] != '\0')
			j++;
		s2[d] = ft_word_copy(&s[i], j - i);
		if (!s2[d])
		{
			while (d >= 0)
			{
				free (s2[d]);
				d--;
			}
			free (s2);
			return (NULL);
		}
		words--;
		d++;
		i = j;
	}
	s2[d] = '\0';
	return (s2);
}

int main ()
{
	int x = word_count("Hekko I am anwar", 'I');
	printf("words ccout is %d", x);
	return (0);	
}