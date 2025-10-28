/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:53:21 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/28 15:40:24 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(unsigned char c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int	main(void){
	unsigned char c = "d";
	printf("%i", ft_isalnum(c));
	return (0);
}
