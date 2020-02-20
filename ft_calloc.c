/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <pmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 14:52:36 by pmartins          #+#    #+#             */
/*   Updated: 2020/02/13 12:49:30 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char		*ptr;
	unsigned long int	len;
	int					i;

	len = count * size;
	i = 0;
	if (!(ptr = (unsigned char *)malloc(len + 1)))
		return (NULL);
	ft_bzero(ptr, len);
	return (ptr);
}
