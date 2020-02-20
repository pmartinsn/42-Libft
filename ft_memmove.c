/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <pmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 13:38:14 by pmartins          #+#    #+#             */
/*   Updated: 2020/02/12 17:56:41 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s1;
	char	*aux;

	s1 = (char*)src;
	aux = (char*)dest;
	if (src < dest)
	{
		while (n--)
			aux[n] = s1[n];
	}
	else
	{
		ft_memcpy(aux, s1, n);
	}
	return (dest);
}
