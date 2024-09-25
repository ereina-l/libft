/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:11:50 by ereina-l          #+#    #+#             */
/*   Updated: 2024/09/25 13:44:46 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t  len;
    char    *dup;

    len = ft_strlen((char *)s);
    dup = (char *)malloc(len + 1);
    if (!dup)
        return(NULL);
    ft_strlcpy(dup, s, len);
    return (dup);
}
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc != 2)
        return (0);
    printf("La cadena es: %s\n", ft_strdup(argv[1]));
    free(dup); //no me identifica aqui el dup, tendría que declararlo en el main e inicializarlo llamando a ft_strdup?
    return (0);
}