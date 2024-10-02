/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:58:23 by ereina-l          #+#    #+#             */
/*   Updated: 2024/10/02 11:24:01 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;
	
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*int	main()
{
	char	*str = "Chochote";
	ft_putstr_fd(str, 1);
	write (1, "\n", 1);
	return (0);
}*/