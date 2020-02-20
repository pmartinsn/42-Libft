/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <pmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 10:23:23 by pmartins          #+#    #+#             */
/*   Updated: 2020/02/13 11:55:52 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*ptr;

	j = 0;
	i = ft_strlen(src);
	if (!(ptr = malloc(sizeof(char) * i + 1)))
		return (0);
	while (j < i)
	{
		ptr[j] = src[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
