/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:16:40 by ereina-l          #+#    #+#             */
/*   Updated: 2024/10/04 15:33:37 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_stringcount(char const *s, char c)
{
	char	*str;
	int		count;
	int		i;

	str = ft_strtrim(s, &c);
	count = 0;
	i = 0;
	if (!*str)
		return (0);
	while (str[i])
	{
		while (str[i] && str[i] != c)
			i++;
		if (str[i] == c)
		{
			count++;
			while (str[i] == c)
				i++;
		}
	}
	free(str);
	return (count + 1);
}

static size_t	ft_sublen(char const *ptr, char c, int i)
{
	size_t	len;

	len = 0;
	while (ptr[i] && ptr[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static void	ft_clean(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		ptr[i] = NULL;
		i++;
	}
	free(ptr);
	ptr = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		count;
	int		i;
	int		j;
	size_t	len;

	i = 0;
	j = 0;
	count = ft_stringcount(s, c);
	split = (char **)malloc((count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (s[i] && j < count)
	{
		while (s[i] == c)
			i++;
		len = ft_sublen(s, c, i);
		split[j] = ft_substr(s, i, len);
		if (!split[j])
			return (ft_clean(split), NULL);
		i = i + len;
		j++;
	}
	split[j] = 0;
	return (split);
}
/* int	main(void)
{
	char const	*str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
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
