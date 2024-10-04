/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:59:27 by ereina-l          #+#    #+#             */
/*   Updated: 2024/10/04 17:07:32 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (s[i] != (char) c)
	{
		if (i == 0)
			return (0);
		i--;
	}
	return ((char *) &s[i]);
}
/* #include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%s\n", ft_strrchr(argv[1], 'o'));
	return (0);
} */
