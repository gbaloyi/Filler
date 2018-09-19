/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:55:46 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/08/23 13:46:16 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"

static int		move_right(t_information *information,
		t_piece *piece, int y, int x)
{
	int		i;
	int		j;

	i = piece->column - 1;
	while (i >= 0)
	{
		j = piece->row - 1;
		while (j >= 0)
		{
			if (piece->piece[i][j] == '*')
			{
				if (check_piece_ft(information, piece, x - j, y - i))
				{
					ft_putnbr(y - i);
					ft_putchar(' ');
					ft_putnbr(x - j);
					ft_putchar('\n');
					return (1);
				}
			}
			j--;
		}
		i--;
	}
	return (0);
}

static int		move_left(t_information *information,
		t_piece *piece, int y, int x)
{
	int		i;
	int		j;

	i = 0;
	while (i < piece->column)
	{
		j = 0;
		while (j < piece->row)
		{
			if (piece->piece[i][j] == '*')
			{
				if (check_piece_ft(information, piece, x - j, y - i))
				{
					ft_putnbr(y - i);
					ft_putchar(' ');
					ft_putnbr(x - j);
					ft_putchar('\n');
					return (1);
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}

void			move_bottom(t_information *information, t_piece *piece)
{
	int		x;
	int		y;

	y = information->map_column - 1;
	while (y > 0)
	{
		x = information->map_row - 1;
		while (x > 0)
		{
			if (information->map[y][x] == information->letter)
			{
				if (move_left(information, piece, y, x) == 1)
				{
					return ;
				}
			}
			x--;
		}
		y--;
	}
	information->finish = 1;
}

void			place(t_information *information, t_piece *piece)
{
	int		y;
	int		x;

	y = 0;
	while (y < information->map_column)
	{
		x = 0;
		while (x < information->map_row)
		{
			if (information->map[y][x] == information->letter)
			{
				if (move_right(information, piece, y, x) == 1)
					return ;
			}
			x++;
		}
		y++;
	}
	information->count = 1;
}
