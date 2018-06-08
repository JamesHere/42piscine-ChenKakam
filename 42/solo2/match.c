/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 11:08:09 by kachen            #+#    #+#             */
/*   Updated: 2018/05/26 11:08:10 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int        match(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
        return (1);
    if (*s1 == '\0')
    {
        if (*s2 == '*')
            return (match(s1, s2++));
        else
            return (0);
    }
    if (*s2 == '*')
        return (match(s1 + 1, s2) || match(s1, s2 + 1));
    if (*s1 == *s2)
        return (match(s1++, s2++));
    if (*s1 != *s2)
        return (0);
    return (-1);
}

int    main()
{
    char s1[] = "a*a";
    char s2[] = "a*";
    int res = match(s1, s2);
    printf("%d\n", res);
    return (0);
}