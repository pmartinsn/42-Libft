/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <pmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 12:22:26 by pmartins          #+#    #+#             */
/*   Updated: 2020/02/27 15:43:52 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, unsigned long int dstsize)
{
	unsigned long int	i;
	unsigned long int	j;

	i = 0;
	while (i < dstsize && dst[i])
	{
		i++;
	}
	j = 0;
	while (i + j + 1 < dstsize && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = 0;
	return (i + ft_strlen((char*)src));
}
