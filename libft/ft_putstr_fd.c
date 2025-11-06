/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:30:59 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/06 15:19:52 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/* int	main(void)
{
	int fd;
	fd = open("fd", O_RDWR | O_CREAT, 0644);
	if (fd == -1)
		return (1); 
	ft_putstr_fd("Hello 42", fd);
	close(fd);
	return (0);
} */