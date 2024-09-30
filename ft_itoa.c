/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:50:59 by ereina-l          #+#    #+#             */
/*   Updated: 2024/09/30 13:47:24 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nlen(long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		len = 1;
		n = -n;
	}
	while (n != 0)
	{
		n = n/10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			len;
	long int	number;
	
	number = n;
	len = ft_nlen(number);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (number == 0)
		res[0] = '0';
	if (number < 0)
	{
		res[0] = '-';
		number = -number;
	}
	while (number > 0)
	{
		len--;
		res[len] = 48 + (number % 10);
		number = number/10;
	}
	return (res);	
}
#include <stdio.h>

int	main(void)
{
	printf("ft_itoa negativo: %s\n", ft_itoa(-1278));
	printf("ft_itoa positivo: %s\n", ft_itoa(1278));
	printf("ft_itoa zero: %s\n", ft_itoa(0));
	return (0);
}