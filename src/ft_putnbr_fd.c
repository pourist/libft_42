/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppour-ba <ppour-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:11:09 by ppour-ba          #+#    #+#             */
/*   Updated: 2025/03/26 15:47:16 by ppour-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	t;

	t = n;
	if (t < 0)
	{
		ft_putchar_fd('-', fd);
		t *= -1;
	}
	if (t >= 10)
	{
		ft_putnbr_fd((t / 10), fd);
	}
	ft_putchar_fd((t % 10 + '0'), fd);
}
