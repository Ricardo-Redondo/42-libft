/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 23:08:53 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/13 23:10:53 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
	{
		return(0);
	}
	if (s1 && s2)
	{
		while (i < n)
		{
			if(s1[i] != s2[i] || s1[i] == '\0')
			{
				return (s1[i] - s2[i]);
			}
			i++;
		}
	}
	return(0);
}
