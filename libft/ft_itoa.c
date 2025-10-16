/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:10:42 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/16 16:07:16 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_num(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		count;
	long	nb;
	char	*dest;

	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		count = count_num(nb);
		dest = (char *)malloc(sizeof(char) * (count + 1));
	}
	else
	{
		count = count_num(nb);
		dest = (char *)malloc(sizeof(char) * count);
	}
}
