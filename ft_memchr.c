/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:57:30 by ereina-l          #+#    #+#             */
/*   Updated: 2024/09/20 15:30:54 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	l;

	str = (unsigned char *)s;
	l = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == l)
			return (&str[i]);
		i++;
	}
	return (0);
}
/* #include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%s\n", (char *)ft_memchr(argv[1], 'o', 6));
	return (0);
} */
