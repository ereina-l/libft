/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:27:54 by ereina-l          #+#    #+#             */
/*   Updated: 2024/09/20 12:38:42 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!dst && !src)
		return (0);
	if (dst < src)
		ft_memcpy(dst, src, n);
	else
	{
		d = (char *)dst;
		s = (const char *)src;
		while (n != 0)
		{
			d[n] = s[n];
			n--;
		}
	}
	return (dst);
}

#include <stdio.h>
int	main(void)
{
	char	dst[4];
	char	src[] = "Javier";

	ft_memmove(dst, src, 4);
	printf("%s\n", dst);
	return (0);
}