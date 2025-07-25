/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:36:38 by ereina-l          #+#    #+#             */
/*   Updated: 2024/09/27 16:48:33 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim = ft_substr(s1, start, end - start);
	return (trim);
}
/* #include <stdio.h>
int	main(int argc, char **argv)
{
	char	*trim;

	if (argc != 3)
		return (0);
	trim = ft_strtrim(argv[1], argv[2]);
	printf("Las cadenas originales son: %s\n %s\n", argv[1], argv[2]);
	printf("EL resultado es: %s\n", trim);
	free(trim);
	return (0);
}  */