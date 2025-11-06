/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:10:42 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/06 15:06:31 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_num(long n)
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

static	char	*nbchar(long nb, int count, char *str)
{
	if (nb == 0)
	{
		str[0] = '0';
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[count--] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		count;
	long	nb;
	char	*dest;

	nb = n;
	count = count_num(nb);
	dest = (char *)malloc(sizeof(char) * (count + 1));
	if (!dest)
		return (NULL);
	dest[count--] = '\0';
	return (nbchar(nb, count, dest));
}

/* int	main(void){
	int n = -42;
	int n2 = 42;	
	printf("%s", ft_itoa(n));
	printf("%s", ft_itoa(n2));
	printf("%s", ft_itoa(0));
	return (0);
}
 */