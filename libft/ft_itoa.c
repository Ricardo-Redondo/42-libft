/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:10:42 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/29 10:40:50 by rsao-pay         ###   ########.fr       */
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
int	nbchar(long nb, int count, int sign)
{
	char	*c;
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = 0;
	if (sign < 0)
	{
		i = 1;
		j = 1;
	}
	if (nb >= 10)
	{
		c[i] = nb % 10;
		ft_putnbr(nb / 10);
		i++;
	}
	while (i < count / 2)
	{
		temp = c[i];
		c[i] = c[count - 1 - i];
		c[count - 1 - i] = temp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	int		count;
	long	nb;
	char	*dest;
	int		sign;

	nb = n;
	if (nb < 0)
		sign = -1;
	else
		sign = 1;
	count = count_num(nb);
	dest = (char *)malloc(sizeof(char) * count + 1);
	dest = nbchar(nb, count - 1, sign);
	dest[count] = '\0';
	return (dest);
}

int	main(void){
	int n = -42;
	int n2 = 42;	
	printf("%s", ft_itoa(n));
	printf("%s", ft_itoa(n2));
	printf("%s", ft_itoa(0));
	return (0);
}
