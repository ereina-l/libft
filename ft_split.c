/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:16:40 by ereina-l          #+#    #+#             */
/*   Updated: 2024/10/04 19:00:13 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_stringcount(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_sublen(const char *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static void	ft_clean(char **str, int j)
{
	while (j > 0)
	{
		free(str[j - 1]);
		j--;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;

	split = malloc((ft_stringcount(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	j = 0;
	i = 0;
	while (j < ft_stringcount(s, c))
	{
		while (s[i] == c)
			i++;
		split[j] = ft_substr(s, i, ft_sublen(s, c, i));
		if (!(split[j]))
		{
			ft_clean(split, j);
			return (NULL);
		}
		i += ft_sublen(s, c, i);
		j++;
	}
	split[j] = 0;
	return (split);
}

/* int	main(void)
{
	char const	*str = "lorem ipsum dolor sit";
	char	c;
	char	**chicotin;
	int		i;
	c = 32;
	i = 0;
	chicotin = ft_split(str, c);
	while (chicotin[i])
	{
		printf("Chicotin es: %s\n", chicotin[i]);
		i++;
	}
	ft_clean(chicotin);
	return (0);
} */
