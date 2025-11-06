/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:26:32 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/06 15:18:51 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int	main(void)
{
	int fd;
	fd = open("fd", O_RDWR | O_CREAT, 0644);
	if (fd == -1)
		return (1); 
	ft_putchar_fd('u', fd);
	close(fd);
	return (0);
} */