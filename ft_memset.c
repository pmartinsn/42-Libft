/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <pmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:54:51 by pmartins          #+#    #+#             */
/*   Updated: 2020/02/13 11:47:58 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char *ptr;
	char d;

	ptr = s;
	d = (unsigned char)c;
	if ((!s) && (!c))
		return (0);
	while (n)
	{
		*ptr = d;
		ptr++;
		n--;
	}
	return (s);
}
