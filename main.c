/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:59:32 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/08/23 13:47:30 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"

static void		init(t_information *information, t_piece *piece)
{
	information->nbr = 0;
	information->count = 0;
	information->finish = 0;
	piece->column = 0;
	piece->row = 0;
}

int				main(void)
{
	t_information		information;
	t_piece				piece;

	init(&information, &piece);
	get_information(&information);
	while (1)
	{
		if (information.nbr == 1 || information.nbr == 2)
		{
			if (player(&information, &piece) == 0)
			{
				break ;
			}
		}
	}
	return (0);
}
