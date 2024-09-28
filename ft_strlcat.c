/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:31:39 by ereina-l          #+#    #+#             */
/*   Updated: 2024/09/28 16:19:29 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;	

	i = 0;
	j = 0;
	if (ft_strlen(dst) >= size)
		return (size + ft_strlen(src));
	while (dst[j] != '\0')
		j++;
	while (src[i] && i < size - j - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (j + i);
}
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dst[] = "albertochicote";
	char	src[] = "Miaumiaumiau";
	size_t	rvalue;
	//size_t	rvalue2;

	rvalue = ft_strlcat(dst, src, 18);
	//rvalue2 = strlcat(dst, src, 2);
	printf("ret value: %zu ; dst: %s\n", rvalue, dst);
	//printf("ret value de funsionsita real: %zu ; dst: %s\n", rvalue2, dst);
	return (0);
}