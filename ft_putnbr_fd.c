/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:26:14 by ereina-l          #+#    #+#             */
/*   Updated: 2024/10/02 11:43:33 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -(n);
			ft_putnbr_fd(n, fd);
		}
		else if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			n = n + '0';
			write(fd, &n, 1);
		}
	}
}
/*int	main()
{
	ft_putnbr_fd(34, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-7568, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
	return (0);
}*/