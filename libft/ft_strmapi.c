/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:16:44 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/29 23:58:00 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*dest;

	i = 0;
	len = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (i < len)
	{
		*dest = f(i, s[i]);
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

int	main(void){
	
}
