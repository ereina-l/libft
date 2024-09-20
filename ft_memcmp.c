/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:18:54 by ereina-l          #+#    #+#             */
/*   Updated: 2024/09/20 15:31:43 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*str1;
	unsigned char		*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	if (i < n)
		return (str1[i] - str2[i]);
	else
		return (0);
}
/* #include <stdio.h>
int	main(int argc, char **argv)
{
	int	rvalue;

	if (argc != 3)
		return (0);
	rvalue = ft_memcmp(argv[1], argv[2], 3);
	printf("%d\n", rvalue);
	return (0);
} */