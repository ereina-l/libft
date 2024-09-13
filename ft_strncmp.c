/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:58:13 by ereina-l          #+#    #+#             */
/*   Updated: 2024/09/13 15:58:14 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else
		return (0);
}
/*#include <stdio.h>
int	main(int argc, char **argv)
{
	int	rvalue;

	if (argc != 3)
		return (0);
	rvalue = ft_strncmp(argv[1], argv[2], 3);
	printf("%d\n", rvalue);
	return (0);
}*/