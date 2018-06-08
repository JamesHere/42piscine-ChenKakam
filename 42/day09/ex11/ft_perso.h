/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:03:29 by kachen            #+#    #+#             */
/*   Updated: 2018/05/25 14:03:30 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# define FT_PERSO_H
# define SAVE_THE_WORLD "world"
#include <string.h>

typedef struct Perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;	
} t_perso;