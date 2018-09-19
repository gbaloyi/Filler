/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_piece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:55:10 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/08/20 12:29:41 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"

static	int		check_size(t_information *information,
		t_piece *piece, int x, int y)
{
	if (x > information->map_row || x < 0)
		return (0);
	if (y > information->map_column || y < 0)
		return (0);
	if (x + piece->row > information->map_row)
		return (0);
	if (y + piece->column > information->map_column)
		return (0);
	return (1);
}

static	int		check_position(t_information *information,
		t_piece *piece, int x, int y)
{
	int		i;
	int		j;
	int		tmp;
	int		counter;

	i = -1;
	tmp = x;
	counter = 0;
	while (++i < piece->column)
	{
		j = -1;
		x = tmp;
		while (++j < piece->row)
		{
			if (information->nbr == 1)
				if (piece->piece[i][j] == '*' && information->map[y][x] == 'O')
					counter++;
			if (information->nbr == 2)
				if (piece->piece[i][j] == '*' && information->map[y][x] == 'X')
					counter++;
			x++;
		}
		y++;
	}
	return (counter > 1) ? 0 : 1;
}

static	int		check_other_pos(t_information *information,
		t_piece *piece, int x, int y)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	tmp = x;
	while (i < piece->column)
	{
		j = 0;
		x = tmp;
		while (j < piece->row)
		{
			if (information->nbr == 1)
				if (piece->piece[i][j] == '*' && information->map[y][x] == 'X')
					return (0);
			if (information->nbr == 2)
				if (piece->piece[i][j] == '*' && information->map[y][x] == 'O')
					return (0);
			x++;
			j++;
		}
		y++;
		i++;
	}
	return (1);
}

int				check_piece_ft(t_information *information,
		t_piece *piece, int x, int y)
{
	if (check_size(information, piece, x, y) == 0)
		return (0);
	if (check_position(information, piece, x, y) == 0)
		return (0);
	if (check_other_pos(information, piece, x, y) == 0)
		return (0);
	return (1);
}
