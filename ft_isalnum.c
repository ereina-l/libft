/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:23:30 by ereina-l          #+#    #+#             */
/*   Updated: 2024/10/04 12:58:20 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
		return (c);
	return (0);
}
/* #include <stdio.h>
int	main()
{	
	int	i;
	i = 0;
    while (i <= 47)
    {
        printf("%d", (ft_isalnum(i)));
        i++;
    }

} */