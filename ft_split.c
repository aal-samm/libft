/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:33:28 by aal-samm          #+#    #+#             */
/*   Updated: 2023/11/14 21:37:30 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
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

static	char	*ft_word_copy(const char *s, int n)
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

void	free_all(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**s2;
	int		a[3];

	a[0] = 0;
	a[1] = 0;
	s2 = malloc (sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!s2)
		return (NULL);
	while (ft_word_count(s, c) > a[0] && s[a[0]] != '\0')
	{
		while (s[a[1]] == c)
			(a[1])++;
		a[2] = a[1];
		while (s[a[2]] != c && s[a[2]] != '\0')
			a[2]++;
		s2[a[0]] = ft_word_copy(&s[a[1]], a[2] - a[1]);
		if (!s2[a[0]])
			return (free_all(s2), NULL);
		a[1] = a[2];
		(a[0])++;
	}
	s2[a[0]] = NULL;
	return (s2);
}

// int main ()
// {
// 	char c = ' ';	
// 	const char *h ="Hekko I am anwar ";
// 	int x;
// 	char *o;
// 	// x = ft_word_count(p, c);
// 	// printf("h %d", x);
// 	o = ft_split(h,  c);
// 	printf("words ccout is %s", o);

// 	return (0);	
// }