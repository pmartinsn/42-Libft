/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 12:22:26 by pmartins          #+#    #+#             */
/*   Updated: 2020/02/13 12:24:01 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	get_size(char *string)
{
	unsigned int	size;

	size = 0;
	while (string[size] != '\0')
	{
		size++;
	}
	return (size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	source_size;
	unsigned int	dest_size;
	unsigned int	i;
	unsigned int	j;
	unsigned int	response;

	source_size = get_size(src);
	dest_size = get_size(dest);
	i = dest_size;
	j = 0;
	while (size > 0 && src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	response = dest_size;
	if (dest_size >= size)
		response = size;
	return (source_size + response);
}
