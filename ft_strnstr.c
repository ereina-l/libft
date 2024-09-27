/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:36:38 by ereina-l          #+#    #+#             */
/*   Updated: 2024/09/27 12:10:42 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)big;
	if (!(little))
		return (str);
	while (str[i])
	{
		if (str[i] == little[j])
		{
			while (str[i + j] == little[j] && i + j < len)
				j++;
			if (little[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/* #include <stdio.h>

int	main(int argc, char **argv)
{
	char	*rvalue;

	rvalue = ft_strnstr(argv[1], argv[2], 6);
	if (argc != 3)
		return (0);
	printf("%s\n", rvalue);
	return (0);
} */