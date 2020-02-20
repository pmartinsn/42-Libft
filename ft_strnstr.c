/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <pmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 17:05:43 by pmartins          #+#    #+#             */
/*   Updated: 2020/02/11 17:33:22 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!*needle)
		return ((char *)&haystack[i]);
	while ((haystack[i] != '\0') && (i < len))
	{
		j = 0;
		while (haystack[i] == needle[j])
		{
			while (haystack[i] && (haystack[i] == needle[j])
			&& (j < ft_strlen((char *)needle)) && (i < len))
			{
				i++;
				j++;
				if (needle[j] == '\0')
					return ((char *)&haystack[i - j]);
			}
			j = 0;
			i++;
		}
		i++;
	}
	return (0);
}
