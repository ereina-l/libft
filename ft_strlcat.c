/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:31:39 by ereina-l          #+#    #+#             */
/*   Updated: 2024/09/20 15:34:05 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Esto es strcpy, hay que modificarla, función no terminada

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return ((size_t)ft_strlen((char *)src));
}
/* #include <stdio.h>
int	main(void)
{
	char	dst[4];
	char	src[] = "Miaumiaumiau";
	int		rvalue;
	rvalue = ft_strlcat(dst, src, 0);
	printf("ret value: %i ; dst: %s\n", rvalue, dst);
	return (0);
} */