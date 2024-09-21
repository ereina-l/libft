/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:31:39 by ereina-l          #+#    #+#             */
/*   Updated: 2024/09/21 19:17:57 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Tengo que echarle un ojo a esta mierrrrda me da más fallos que una escopeta feria

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;	

	i = 0;
	j = 0;
	if ((size_t)ft_strlen(dst) >= size)
		return (size + ft_strlen((char*)src));
	while (dst[j] != '\0')
		j++;
	while (src[i] && i < size - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (ft_strlen(dst) + ft_strlen((char*)src));
}
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dst[] = "albertochicote";
	char	src[] = "Miaumiaumiau";
	
	int		rvalue;
	//int		rvalue2;
	rvalue = ft_strlcat(dst, src, 2);
	//rvalue2 = strlcat(dst, src, 7);
	printf("ret value: %i ; dst: %s\n", rvalue, dst);
	//printf("ret value de funsionsita real: %i ; dst: %s\n", rvalue2, dst);
	return (0);
}