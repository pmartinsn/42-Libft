/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <pmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 11:36:23 by pmartins          #+#    #+#             */
/*   Updated: 2020/02/19 19:45:40 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cwords(char const *s, char c)
{
	int		i;
	int		word;
	int		count;

	i = 0;
	word = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			word = 0;
		else if (s[i] != c && word == 0)
		{
			word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*makeword(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(i + 1);
	if (!word)
		return (NULL);
	word[i] = 0;
	i--;
	while (i >= 0)
	{
		word[i] = s[i];
		i--;
	}
	return (word);
}

char		**ft_split(char const *s, char c)
{
	char	**split;
	int		word;
	int		count;
	int		i;

	if (!s || !(split = (char **)malloc((cwords(s, c) + 1) * sizeof(char *))))
		return (NULL);
	word = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			word = 0;
		else if (s[i] != c && word == 0)
		{
			word = 1;
			if (!(split[count] = makeword(&s[i], c)))
				return (NULL);
			count++;
		}
		i++;
	}
	split[count] = 0;
	return (split);
}
