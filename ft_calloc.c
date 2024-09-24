/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:42:54 by ereina-l          #+#    #+#             */
/*   Updated: 2024/09/24 14:07:16 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_calloc(size_t count, size_t size)
{
    // utilizo un puntero void porque al utilizar la ft_bzero ya me lo va a castear a char 
    void   *ptr; 
    size_t  total_size;

    total_size = count * size;
    ptr = (void *)malloc(total_size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, total_size);
    return (ptr);
}