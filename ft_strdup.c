/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereina-l <ereina-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:11:50 by ereina-l          #+#    #+#             */
/*   Updated: 2024/09/27 11:35:12 by ereina-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t  len;
    char    *dup;

    len = ft_strlen(s);
    dup = (char *)malloc((len + 1) * sizeof(char));
    if (!dup)
        return(NULL);
    ft_strlcpy(dup, s, len + 1);
    return (dup);
}
#include <stdio.h>
int main(int argc, char **argv)
{
    char  *dup;

    dup = ft_strdup(argv[1]);
    if (argc != 2)
        return (0);
    printf("La cadena es: %s\n", argv[1]);
    printf("La copia de la cadena es: %s\n", dup);
    free(dup);
    return (0);
}