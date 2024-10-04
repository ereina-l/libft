/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:33:36 by ereina-l          #+#    #+#             */
/*   Updated: 2024/10/04 17:29:09 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	int		j;

	join = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!join)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[i] = '\0';
	return (join);
}
/* #include <stdio.h>
int	main(int argc, char **argv)
{
	char	*join;

	if (argc != 3)
		return (0);
	join = ft_strjoin(argv[1], argv[2]);
	printf("Las cadenas originales son: %s\n %s\n", argv[1], argv[2]);
	printf("EL resultado es: %s\n", join);
	free(join);
	return (0);
} */