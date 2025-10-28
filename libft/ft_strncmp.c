/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 23:08:53 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/28 15:16:25 by rsao-pay         ###   ########.fr       */
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
				return ((unsigned char)s1[i] - (unsigned char)s2[i]);
			}
			i++;
		}
	}
	return(0);
}

int main()
{
	char s1[] = "dfuygffa";
	char s2[] = "dfuyg";
	size_t n = 2;
	printf("%d", ft_strcmp(s1, s2, n));	
}
