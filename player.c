/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:00:00 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/08/20 11:52:57 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"

static int		check_column(t_information *information, int x)
{
	int		y;

	y = 0;
	while (y < information->map_column)
	{
		if (information->map[y][x] == information->letter)
			return (1);
		y++;
	}
	return (0);
}

int				player(t_information *information, t_piece *piece)
{
	get_map(information, piece);
	if (check_column(information, 0) == 0)
		place(information, piece);
	else
		move_bottom(information, piece);
	if (information->count == 1)
		move_bottom(information, piece);
	if (information->finish == 1)
	{
		ft_putnbr(0);
		ft_putchar(' ');
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	return (1);
}
