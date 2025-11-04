/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:40:21 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/04 23:09:23 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, &s, ft_strlen(s));
	write(fd, "\n", 1);
}

int	main(void){
	char *c = "Hello 42";
	int fd = 1;

	ft_putendl_fd(c, fd);
	return (0);
}
