/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:00:37 by ereina-l          #+#    #+#             */
/*   Updated: 2024/10/04 14:51:32 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	if (c == 0)
		return ((char *) s);
	return (0);
}
/* #include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%s\n", ft_strchr(argv[1], 'o'));
	return (0);
} */
