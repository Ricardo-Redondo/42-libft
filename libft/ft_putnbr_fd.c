/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:38:17 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/06 15:19:46 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	c;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	c = '0' + (nb % 10);
	ft_putchar_fd(c, fd);
}

/* int	main(void)
{
	int fd;
	fd = open("fd", O_RDWR | O_CREAT, 0644);
	if (fd == -1)
		return (1); 
	ft_putnbr_fd(42, fd);
	close(fd);
	return (0);
} */