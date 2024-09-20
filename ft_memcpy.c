/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:23:56 by ereina-l          #+#    #+#             */
/*   Updated: 2024/09/20 12:03:59 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	const char	*s;

	if (!dst && !src)
		return (0);
	i = 0;
	d = (char *)dst;
	s = (const char *)src;
	while (i < n)
	{
		d[i] = (const char)s[i];
		i++;
	}
	return (dst);

}

/* #include <stdio.h>
int	main(void)
{
	char	dst[4];
	char	src[] = "Javier";

	ft_memcpy(dst, src, 4);
	printf("%s\n", dst);
	return (0);
} */