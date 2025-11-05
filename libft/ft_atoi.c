/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:13:48 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/04 23:49:31 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	sum;
	int	sign;

	sum = 0;
	sign = 1;
	while (*ptr == ' ' || (*ptr >= 9 && *ptr <= 13))
		ptr++;
	if (*ptr == '+' || *ptr == '-')
	{
		if (*ptr == '-')
			sign *= -1;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		sum = (sum * 10) + (*ptr - '0');
		ptr++;
	}
	return (sign * sum);
}

/* int	main(void){
	const char *str = "IloveAtoi";
	printf("%i\n", ft_atoi(str));
	return(0);
} */
