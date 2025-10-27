/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:51:44 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/27 18:49:36 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	dest = (char *)malloc(sizeof(char *) * (len_s1 + len_s1 + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest,s1 ,len_s1);
	ft_memcpy(dest + len_s1, s2, len_s2);
	dest[len_s1 + len_s2] = '\0';
	return (dest);
}

int	main(void){
	
}
