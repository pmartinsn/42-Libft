/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <pmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:16:14 by pmartins          #+#    #+#             */
/*   Updated: 2020/02/12 13:37:59 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long a;

	a = nb;
	if (a < 0)
	{
		write(fd, "-", 1);
		a = a * -1;
	}
	if (a / 10 > 0)
	{
		ft_putnbr_fd(a / 10, fd);
	}
	ft_putchar_fd((char)(a % 10 + 48), fd);
}
