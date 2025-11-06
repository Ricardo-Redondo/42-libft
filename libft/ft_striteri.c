/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:25:20 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/06 15:38:00 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* static void	f(unsigned int i, char *c)
{
	(void)i;
	*c = (char)ft_tolower((unsigned char)*c);
}

int	main(void){
	char *s = "Hello 42";

	printf("before: \"%s\"\n", s);
	ft_striteri(s, f);
	printf("after: \"%s\"\n", s);
	return (0);
}
 */